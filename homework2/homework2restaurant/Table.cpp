//
// Created by maaye on 5/1/2018.
//

using namespace std;
#include "Table.h"
#include <iostream>

Table::Table(int n) : maxGuests(n) {
  //maxGuests = n;
  numGuests = 0;
}

int Table::maxOccupancy() {
  return maxGuests;
  //int max_occupancy;
}

int Table::currentOccupancy() {
  return numGuests;
}

bool Table::addGuests(int n) {
  if (n <= (maxGuests - numGuests)) {
    numGuests = numGuests + n;
    return true;
  }
  else {
    return false;
  }
//  if ((currentOccupancy() <= n) && (n <= maxOccupancy()) ) {
//    numGuests = n;
//    return true;
//  }
//  else {
//    return false;
//  }
}
