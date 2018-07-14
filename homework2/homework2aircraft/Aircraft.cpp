//
// Created by Maayez Imam on 5/2/2018.
//
using namespace std;
#include "Aircraft.h"
#include <iostream>
using namespace std;

Aircraft::Aircraft(int n, string name_str) : numEng(n), nm(name_str){
  hrs = new int[numEng];
}

const string Aircraft::name(void) const {
  return nm;
}

int Aircraft::numEngines(void) const {
  return numEng;
}

void Aircraft::setHours(int i, int h) {
  hrs[i - 1] = h;
}

void Aircraft::print(void) const {
  cout << "Aircraft: " << name() << " type: " << type() << " has " << numEngines() << " engines" << endl;

  for (int i = 0; i < numEng; i++) {
    cout << "engine " << i + 1 << ": " << hrs[i] << " hours" << endl;
  }
}

void Aircraft::printSchedule(void) const {
  cout << "Maintenance schedule for " << nm << endl;

  for (int i = 0; i < numEng; i++) {
    if ((maxHours() - hrs[i]) <= 0) {
      cout << "engine " << i + 1 << ": maintenance due now!!" << endl;
    }
    if ((maxHours() - hrs[i]) > 0) {
      cout << "engine " << i + 1 << ": maintenance due  in " << maxHours() - hrs[i] << " hours" << endl;
    }
  }
}

Aircraft* Aircraft::makeAircraft(char ch, string name_str) {

  if (ch == 'A') {
    return new A380(name_str);
  }
  else if (ch == 'B') {
    return new B737(name_str);
  }
  return 0;
}

Aircraft::~Aircraft(void) {
  delete hrs;
}

const string A380::type(void) const {
  return string("Airbus A380");
}

const string B737::type(void) const {
  return string("Boeing 737");
}

const int A380::maxHours(void) const {
  return 750;
}

const int B737::maxHours(void) const {
  return 500;
}

A380::A380(string name_str) : Aircraft(4, string(name_str)) {
}

B737::B737(string name_str) : Aircraft(2, string(name_str)) {
}

