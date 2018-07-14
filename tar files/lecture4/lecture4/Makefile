CXXFLAGS=-Wall

assign1: assign1.o Value3.o
	$(CXX) -o $@ $^

assign2: assign2.o
	$(CXX) -o $@ $^

assign3: assign3.o
	$(CXX) -o $@ $^

class7: class7.cpp
	$(CXX) -o $@ $^

class8: class8.cpp
	$(CXX) -o $@ $^

class9: class9.cpp
	$(CXX) -o $@ $^

class10: class10.cpp
	$(CXX) -o $@ $^

opequal: opequal.cpp
	$(CXX) -o $@ $^

opequal2: opequal2.cpp
	$(CXX) -o $@ $^

noequal: noequal.cpp
	$(CXX) -o $@ $^

overload1: overload1.cpp
	$(CXX) -o $@ $^

overload2: overload2.cpp
	$(CXX) -o $@ $^

plus1: plus1.cpp
	$(CXX) -o $@ $^

plus2: plus2.cpp
	$(CXX) -o $@ $^

plus3: plus3.cpp
	$(CXX) -o $@ $^

plus4: plus4.cpp
	$(CXX) -o $@ $^

except1: except1.cpp
	$(CXX) -o $@ $^

except2: except2.cpp
	$(CXX) -o $@ $^

useValue: useValue.cpp
	$(CXX) -o $@ $^

execs = assign1 assign2 assign3 class7 class8 class9 class10 \
        opequal opequal2 noequal overload1 overload2 \
        plus1 plus2 plus3 plus4 except1 except2 useValue

clean:
	rm -f $(execs) *.o
