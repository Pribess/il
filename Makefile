CC = cc

CFLAGS = -Wall
LDFLAGS =

TARGET = il

INCLUDEDIR = ./include
SOURCES = $(wildcard *.c */*.c */*/*.c)
OBJECTS = $(SOURCES:.c=.o)


$(TARGET) : $(OBJECTS)
	$(CC) $(notdir $^) $(LDFLAGS) -o $@

%.o : %.c
	$(CC) -I$(INCLUDEDIR) -c $(CFLAGS) $< -o $(notdir $@)


.PHONY: all clean

all : $(TARGET)

clean:
	rm -f $(TARGET) *.o
