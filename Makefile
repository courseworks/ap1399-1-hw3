CXX = g++
CXXFLAGS = -std=c++17 -Wall -I h -I /usr/local/include/gtest/ -c
LXXFLAGS = -std=c++17 -Ih -pthread
OBJECTS = ./obj/aphw3.o ./obj/bst.o ./obj/main.o ./obj/aphw3_unittest.o
GTEST = /usr/local/lib/libgtest.a
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS) $(GTEST)
./obj/aphw3.o: ./cpp/aphw3.cpp
	$(CXX) $(CXXFLAGS) ./cpp/aphw3.cpp -o ./obj/aphw3.o
./obj/bst.o: ./cpp/bst.cpp
	$(CXX) $(CXXFLAGS) ./cpp/bst.cpp -o ./obj/bst.o
./obj/aphw3_unittest.o: ./cpp/aphw3_unittest.cpp
	$(CXX) $(CXXFLAGS) ./cpp/aphw3_unittest.cpp -o ./obj/aphw3_unittest.o
./obj/main.o: ./cpp/main.cpp
	$(CXX) $(CXXFLAGS) ./cpp/main.cpp -o ./obj/main.o
clean:
	rm -fv $(TARGET) $(OBJECTS)
