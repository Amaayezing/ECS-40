// Maayez Imam 915342727

#include <string>
#include <iostream>
#include <sstream>
#include "Facility.h"
#include "gcdistance.h"

using namespace std;

Facility::Facility(string s) : site_number_(s.substr(0, 10)), type_(s.substr(11, 13)), code_(s.substr(24, 4)), name_(s.substr(130, 50)), latitude_(convert_latitude(s)), longitude_(convert_longitude(s)){
}

basic_string<char> Facility::site_number(void) const {
  return site_number_;
  //return basic_string<char>();
}

basic_string<char> Facility::type(void) const {
  return type_;
  //return basic_string<char>();
}

basic_string<char> Facility::code(void) const {
  return code_;
  //return basic_string<char>();
}

basic_string<char> Facility::name(void) const {
  return name_;
  //return basic_string<char>();
}

double Facility::latitude(void) const {
  return latitude_;
  //return 0;
}

double Facility::longitude(void) const {
  return longitude_;
  //return 0;
}

double Facility::distance(double lat, double lon) const {
  return gcdistance(latitude_, longitude_, lat, lon);
  // use gcdistance
  //return 0;
}

double Facility::convert_latitude(string s) const {
  double lat;

  istringstream str1(s.substr(535, 11));

  str1 >> lat;
  if (s.substr(546, 1) == "S") {
    lat = lat * -1;
  }

  lat = lat / 3600;
  return lat;
}

double Facility::convert_longitude(string s) const {
  double longi;

  istringstream str2(s.substr(562, 11));

  char direction;
  str2 >> longi >> direction;
  if (s.substr(573, 1) == "W") {
    longi = longi * -1;
  }

  longi = longi / 3600;
  return longi;
}
