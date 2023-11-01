uuCXX = g++
CXXFLAGS = -std=c++11 -Wall

all: classmain

classmain: classmain.o scuclass.o student.o
	$(CXX) $(CXXFLAGS) -o classmain classmain.o scuclass.o student.o

classmain.o: classmain.cxx scuclass.h
	$(CXX) $(CXXFLAGS) -c classmain.cxx

scuclass.o: scuclass.cxx scuclass.h
	$(CXX) $(CXXFLAGS) -c scuclass.cxx

student.o: student.cxx scuclass.h
	$(CXX) $(CXXFLAGS) -c student.cxx

clean:
	rm -f classmain classmain.o scuclass.o student.o

