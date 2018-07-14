//
// Created by maaye on 5/20/2018.
// IMPLEMENT CIRLCE AND RECTANGLE CLASSES

#include "Shape.h"
Rectangle::~Rectangle(void) {

}
bool Rectangle::overlaps(const Shape &r) const {
  return false;
}
bool Rectangle::overlaps(const Circle &r) const {
  return false;
}
bool Rectangle::overlaps(const Rectangle &r) const {
  return false;
}
bool Rectangle::fits_in(const Rectangle &r) const {
  return false;
}
void Rectangle::draw(void) const {

}
