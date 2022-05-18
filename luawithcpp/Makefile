CC = g++

TARGET = main

INC_PATH = -I/usr/local/include
LIB_PATH = -L/usr/local/lib

LDFLAGS = -Llib -llua -ldl

CFLAGS = -Wall -g


$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp $(LDFLAGS)

clean:
	$(RM) $(TARGET)
