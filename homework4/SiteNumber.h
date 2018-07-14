// Maayez Imam 915342727

#ifndef HOMEWORK4_SITENUMBER_H
#define HOMEWORK4_SITENUMBER_H
#include "Runway.h"
#include "Facility.h"

#include <iostream>
using namespace std;

//template <typename Runway>
//template <typename Facility>
template <typename T>
class SiteNumber {
 public:
  explicit SiteNumber (string site_number) : site(site_number) {
  }
  bool operator()(Runway *r) {
    return r -> site_number() == site;
  }
  bool operator()(Facility *f) {
    return f -> site_number() == site;
  }
 private:
  const string site;
};

//template <typename Facility>
//class SiteNumber {
// public:
//  bool operator() (Facility *f) {
//    return f -> site_number() == site;
//  }
// private:
//  const string site;
//};


#endif //HOMEWORK4_SITENUMBER_H