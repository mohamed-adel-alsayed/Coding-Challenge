CC = g++
CFLAGS = -Wall -Wextra -std=c++11
TARGET = main

all: $(TARGET)

$(TARGET): main.cpp
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp

clean:
	rm -f $(TARGET)
