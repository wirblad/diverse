PROG=diverse.exe
CC=gcc
CFLAGS=-g -Wall
DEPS = menu.h safeinput.h circle.h files.h longestword.h
OBJ = menu.o main.o safeinput.o circle.o files.o longestword.o
 
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
 
$(PROG): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)