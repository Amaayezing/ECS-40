// Maayez Imam 915342727

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <cassert>
#include <cmath>
#include <cstring>

#include "Facility.h"
#include "Runway.h"
#include "SiteNumber.h"
#include "Code.h"

using namespace std;


// read airport code from command line

//open and read files
//use substr to get specific characters from text file

// MAY BE VERY WRONG

/*
int main(int argc, char** argv) {

  vector<Facility*> f;
  vector<Runway*> r;

  ifstream facilities("Facilities.txt");
  ifstream runways("Runways.txt");

  // loop through each line in file to find the letters inputted into the command line (the airport code)
  // USING find_if AND FUNCTION OBJECT Code
  // print description of airport (site number, code and name) using Facility.cpp
  // search for runways that belong to airport
  // USING stable_partition AND FUNCTION OBJECT SiteNumber
  // print description of runways (site number, name, length) using Runways.cpp
}
*/


/*

int main(int argc, char** argv) {
  assert(argc == 4);

  const double current_lat = atof(argv[1]);
  const double current_long = atof(argv[2]);
  const int min_length = atoi(argv[3]);

  vector<Facility*> f;

  ifstream facilities("Facilities.txt");

  string l1;
  while (getline(facilities, l1)) {
    Facility *f1 = new Facility(l1);
    f.push_back(f1);
  }

  sort (f.begin(), f.end(), Code(current_lat, current_long));

  vector<Runway*> r;

  ifstream runways("Runways.txt");

  string l2;
  while (getline(runways, l2)) {
    Runway *r1 = new Runway(l2);
    r.push_back(r1);
  }

  int counter = 0;

  for (unsigned int i = 0; i < f.size() && counter < 10; i++) {
    Facility *ff = f[i];

    vector<Runway*> long_runway;

    for (vector<Runway*>::iterator t = find_if(r.begin(), r.end(), SiteNumber(ff -> site_number())); t != r.end(); t = find_if(++t, r.end(), SiteNumber(ff -> site_number()))) {
      if ((*t) -> length() >= min_length) {
        long_runway.push_back(*t);
      }
    }

    if (!long_runway.empty()) {
      counter++;

      cout << ff -> type() << " " << ff -> code() << " " << ff -> name() << " ";
      cout.setf(ios_base::fixed, ios_base::floatfield);
      cout.setf(ios_base::right, ios_base::adjustfield);
      cout.width(5);
      cout.precision(1);
      cout << ff -> distance(current_lat, current_long) << "NM" << endl;

      for (unsigned int j = 0; j < long_runway.size(); j++) {
        Runway *rr = long_runway[j];
        cout << " Runway: " << rr -> name() << " length: " << rr -> length() << " ft" << endl;
      }
    }
  }
}
*/




int main(int argc, char **argv) {
  if (argc < 2) {
    cout << "Not enough arguments" << endl;
    exit(0);
  }
  if (argc > 2) {
    cout << "Too many arguments" << endl;
    exit(0);
  }
  if (strlen(argv[1]) > 4) {
    cout << "Airport code must be at most 4 characters" << endl;
    exit(0);
  }
  if (strlen(argv[1]) < 2) {
    cout << "Airport code must be at least 3 characters" << endl;
    exit(0);
  }

  string codeSearch = argv[1];

  if (codeSearch.length() == 3) {
    codeSearch = codeSearch + " ";
  }

  vector<Facility*> f;
  ifstream facilities("Facilities.txt");
  string line;

  while (getline(facilities, line)) {
    Facility *facility = new Facility(line);
    f.push_back(facility);
  }

  string siteNumberSearch;

  vector<Facility*>::iterator i = f.begin();
  i = find_if(f.begin(), f.end(), Code(codeSearch));
  if (i == f.end()) {
    cout << codeSearch << "not found" << endl;
    exit(0);
  }

  Facility *facility = *i;
  cout << facility -> site_number() << " " << facility -> code() << " " << facility -> name() << endl;
  siteNumberSearch = facility -> site_number();

  vector<Runway*> r;

  vector<Runway*>::iterator iterator1;

  ifstream runways("Runways.txt");

  string line2;

  while (getline(runways, line2)) {
    Runway *runway = new Runway(line2);
    r.push_back(runway);
  }

  vector<Runway*>::iterator iterator2;
  iterator2 = stable_partition(r.begin(), r.end(), SiteNumber<Runway>(siteNumberSearch));

  for (vector<Runway*>::iterator iterator3 = r.begin(); iterator3 != iterator2; ++iterator3) {
    Runway *runway = *iterator3;
    cout << runway->site_number() << " " << runway->name() << " " << runway->length() << endl;
  }
}
