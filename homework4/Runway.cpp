// Maayez Imam 915342727

#include <string>
#include <sstream>
#include <iostream>
#include "Runway.h"

using namespace std;

basic_string<char> Runway::site_number(void) const {
  return site_number_;
  //return basic_string<char>();
}

basic_string<char> Runway::name(void) const {
  return name_;
  //return basic_string<char>();
}

int Runway::length(void) const {
  return length_;
  //return 0;
}

int Runway::convert_length(string s) const {
  int length;

  istringstream str(s.substr(20, 5));

  str >> length;

  return length;
  //return 0;
}

Runway::Runway(string s) : site_number_(s.substr(0, 10)), name_(s.substr(13, 7)), length_(convert_length(s)) {

}
