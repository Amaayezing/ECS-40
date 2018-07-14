// Maayez Imam 915342727

#ifndef HOMEWORK4_CODE_H
#define HOMEWORK4_CODE_H

// MAY BE VERY WRONG

#include "Facility.h"
#include "Runway.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Code {
 public:
  explicit Code(string s) : code(s) {
  }
  bool operator() (Facility *f) {
    return f -> code() == code;
  }
  //Code(string s) : code(s) {}
  //Code(double lati, double longi) : lat(lati), lon(longi) {
  //}
 /* bool operator() (Facility *f1, Facility *f2) {
    return f1 -> distance(lat, lon) < f2 -> distance(lat, lon);
  }*/
 private:
  //const string code;
  //const double lat;
  //const double lon;
  const string code;
  //string code;
};


#endif //HOMEWORK4_CODE_H
