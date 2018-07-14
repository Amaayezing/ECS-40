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


/*
int main(int argc, char** argv) {

  vector<Facility*> f;
  vector<Runway*> r;

  ifstream facilities("Facilities.txt");
  ifstream runways("Runways.txt");

  // read two airport codes from the command line
  // using gcdistance, print the distance between the two aiports

}
*/


int main(int argc, char **argv) {
  if (argc < 3) {
    cout << "Not enough arguments" << endl;
    exit(0);
  }
  if (argc > 3) {
    cout << "Too many arguments" << endl;
    exit(0);
  }
  if (strlen(argv[1]) > 4 || strlen(argv[2]) > 4) {
    cout << "Airport code must be at most 4 characters" << endl;
    exit(0);
  }
  if (strlen(argv[1]) < 2 || strlen(argv[2]) < 2) {
    cout << "Airport code must be at least 3 characters" << endl;
    exit(0);
  }

  string codeSearch1 = argv[1];
  string codeSearch2 = argv[2];

  if (codeSearch1.length() == 3) {
    codeSearch1 = codeSearch1 + " ";
  }

  if (codeSearch2.length() == 3) {
    codeSearch2 = codeSearch2 + " ";
  }

  vector<Facility*> f;

  ifstream facilities("Facilities.txt");

  string line;

  while (getline(facilities, line)) {
    Facility *facility = new Facility(line);
    f.push_back(facility);
  }

  string siteNumberSearch;
  double lat, longi;
  vector<Facility*>::iterator iterator1 = f.begin();

  iterator1 = find_if(f.begin(), f.end(), Code(codeSearch1));

  if (iterator1 == f.end()) {
    cout << codeSearch1 << " not found" << endl;
    exit(0);
  }

  Facility *facility1 = *iterator1;
  lat = facility1 -> latitude();
  longi = facility1 -> longitude();

  iterator1 = f.begin();
  iterator1 = find_if(f.begin(), f.end(), Code(codeSearch2));

  if (iterator1 == f.end()) {
    cout << codeSearch2 << " not found" << endl;
    exit(0);
  }

  facility1 = *iterator1;

  cout << codeSearch1 << " - " << codeSearch2;
  cout << " " << (int)facility1 -> distance(lat, longi) << " NM" << endl;
}

