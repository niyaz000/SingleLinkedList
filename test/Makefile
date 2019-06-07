CXX=g++
INCLUDE_DIRS=../
LDLIBS = -lgtest
CXXFLAGS = -Wall -g --std=c++14
TEST_FILE_DIR = SingleLinkedList
all:
	$(CXX) *.cpp $(TEST_FILE_DIR)/*.cpp -o test $(LDLIBS) $(CXXFLAGS) -I $(INCLUDE_DIRS) ../src/*.cpp
	./test

clean:
	rm -rf *.o test