CXX = g++
CXXFLAGS = -std=c++17 -Wall

SRC = src/main.cpp src/Student.cpp
TEST = tests/test_student.cpp src/Student.cpp

all: app

app:
	$(CXX) $(CXXFLAGS) $(SRC) -o app

test:
	$(CXX) $(CXXFLAGS) $(TEST) -o test_student
	./test_student

clean:
	rm -f app test_student
