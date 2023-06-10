CC = gcc
SRCDIR = src
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = TestC-v1.0.dev1-x86_64-Ubuntu

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) main.o
	$(CC) $(OBJECTS) main.o -o $(EXECUTABLE)

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c $< -o $@

main.o: main.c
	$(CC) -c main.c -o main.o

clear:
	rm -f $(EXECUTABLE) $(OBJECTS) main.o
	
start:
	./$(EXECUTABLE)