#
# Makefile for programs in Lecture 2
#
CXXFLAGS=-Wall

class1: class1.o
	$(CXX) -o $@ $^

class2: class2.cpp
	$(CXX) -o $@ $^

class3: class3.o Value.h
	$(CXX) -o $@ class3.o

class4: class4.o Value2.o
	$(CXX) -o $@ $^

execs = class1 class2 class3 class4

clean:
	rm -f $(execs) *.o
