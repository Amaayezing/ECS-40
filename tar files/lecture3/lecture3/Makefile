#
# Makefile for programs in Lecture 2 and Lecture 3
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

class5: class5.o Value3.o
	$(CXX) -o $@ $^

class6: class6.o Value4.o
	$(CXX) -o $@ $^

execs = class1 class2 class3 class4 class5 class6

clean:
	rm -f $(execs) *.o
