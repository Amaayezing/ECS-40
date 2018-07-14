//
// Created by maayez on 4/16/2018.
// Maayez Imam
// 915342727

#include "Fraction.h"
#include <iostream>
using namespace std;


Fraction::Fraction() {
  this -> numerator = 0;
  this -> denominator = 1;
}

Fraction::Fraction(int a, int b) {
  this -> numerator = a;
  this -> denominator = b;
  if (denominator == 0) {
    throw invalid_argument("zero denominator");
  }
  reduce_fraction(&numerator, &denominator);
}


int Fraction::getNum() const {
  //reduce_fraction(&numerator, &denominator);
  return numerator;
  //return numerator / gcd_finder(numerator, denominator);
  /*int gcd = gcd_finder(numerator, denominator);
  numerator = numerator / gcd;
  return numerator;*/
}


int Fraction::getDen() const {
  //reduce_fraction(&numerator, &denominator);
  //return denominator = reduce_fraction(&numerator, &denominator);
  return denominator;
  //return denominator / gcd_finder(numerator, denominator);
  /*int gcd = gcd_finder(numerator, denominator);
  denominator = denominator / gcd;
  return denominator;*/
}


int Fraction::gcd_finder (int x, int y) const{
  int gcd;
  int remainder;

  remainder = x % y;

  while (remainder != 0) {
    x = y;
    y = remainder;
    remainder = x % y;
  }

  gcd = y;

  //cout << gcd << endl;
  return gcd;
}


void Fraction::reduce_fraction(int *numerator, int *denominator) const {
  int gcd;
  gcd = gcd_finder(*numerator, *denominator);
  *numerator = *numerator / gcd;
  *denominator = *denominator / gcd;
}


//MISSES TEST CASES:
//TEST 6
//TEST 7 (ZERO DENOMINATOR)
//TEST 8 (ZERO DENOMINATOR)
//