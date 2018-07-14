//
// Created by maayez on 4/16/2018.
// Maayez Imam
// 915342727

#ifndef HOMEWORK1_FRACTION_H
#define HOMEWORK1_FRACTION_H

#include <iostream>
#include <stdexcept>
using namespace std;

class Fraction {
 private:
  int numerator;
  int denominator;
 public:
  Fraction();
  Fraction(int a, int b);
  int gcd_finder (int x, int y) const;
  int getNum() const;
  int getDen() const;
  void reduce_fraction(int *numerator, int *denominator) const;
  friend ostream &operator << (ostream &output, const Fraction &fraction) {

    //cout << "<< called" << endl;
    //output << fraction.numerator << '/' << fraction.denominator;
    //if (fraction.numerator % fraction.denominator) //CHECK IF FRACTION CAN BE DIVIDED MORE
    if (fraction.denominator == 1) {
      output << fraction.numerator;
    }
    else if (fraction.denominator < 0) {
      output << fraction.numerator * -1 << '/' << fraction.denominator * -1;
    }
    else {
      output << fraction.numerator << '/' << fraction.denominator;
    }
    return output;
  }

  friend istream &operator >> (istream &input, Fraction &fraction) {
    /*int num1, num2;
    char x;
    input >> num1 >> x >> num2;
    return input;*/

    //cout << ">> called" << endl;
    char right_slash = 0;
    input >> fraction.numerator >> right_slash >> fraction.denominator;
    if (fraction.denominator < 0) {
      fraction.denominator *= -1;
      fraction.numerator *= -1;
    }
    /*if (fraction.denominator == 0) {
      throw "Error: zero denominator";
    }*/
    return input;
  }

  Fraction operator+(const Fraction& fraction) {
    int num, denom;
    denom = fraction.denominator * this -> denominator;
    num = fraction.numerator * this -> denominator + this -> numerator * fraction.denominator;
    return Fraction(num,denom);

    /*cout << "+ called" << endl;
    Fraction f;
    f.numerator = this -> numerator + fraction.numerator;
    if (this -> denominator != fraction.denominator) {
      //this -> denominator = this -> denominator * gcd_finder(numerator, denominator);
      //denominator = denominator * gcd_finder(numerator, denominator);
      //fraction.denominator = fraction.denominator * gcd_finder(numerator, denominator);
      f.denominator = this -> denominator + fraction.denominator;
      reduce_fraction(&numerator, &denominator);
    }
    else {
      f.denominator = this -> denominator;
    }
    f.denominator = f.denominator / gcd_finder(numerator, denominator);
    f.numerator = f.numerator / gcd_finder(numerator, denominator);
    return f;*/
  }

  Fraction operator-(const Fraction& fraction) {
    int num, denom;
    denom = fraction.denominator * this -> denominator;
    num = -fraction.numerator * this -> denominator + this -> numerator * fraction.denominator;
    return Fraction(num, denom);

    /*cout << "- called" << endl;
    Fraction f;
    f.numerator = this -> numerator - fraction.numerator;
    f.denominator = this -> denominator - fraction.denominator;
    return f;*/
  }

  Fraction& operator=(const Fraction& fraction){
    //cout << "=  called" << endl;
    numerator = fraction.numerator;
    denominator = fraction.denominator;
    return *this;
  }
};

#endif //HOMEWORK1_FRACTION_H