# the compiler: gcc for the C program on Linux.
CC = gcc

# compiler flags:
# -o: 
CFLAGS  = -o

# the build target executable:
TARGET = /bin/Broken-Warrior

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) $(TARGET) main.c

clean:
	$(RM) $(TARGET)
