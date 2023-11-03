CXX=clang++
CXXFLAGS=-std=c++20 -Werror

main: main.cpp
	$(CXX) $(CXXFLAGS) -o main main.cpp

