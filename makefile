CXX = g++
CXXFLAGS = -std=c++11 -Wall
LIBS = $(shell pkg-config --libs icu-uc icu-io)
INCLUDES = $(shell pkg-config --cflags icu-uc icu-io)
TARGET = main
SRCS = main.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(INCLUDES) $(LIBS)

clean: $(RM) $(TARGET)
