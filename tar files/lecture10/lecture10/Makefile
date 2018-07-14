CXXFLAGS=-Wall
useList: useList.o
	$(CXX) -o $@ $^

useIntList: IntList.o useIntList.o
	$(CXX) -o $@ $^

clean:
	rm -f useIntList useList *.o
