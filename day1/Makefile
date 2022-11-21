CC = gcc
FLAGS = -Wall -Wpedantic

all: depth

depth: depth.c
	$(CC) $(FLAGS) -o depth.elf depth.c
	./depth.elf

clean: 
	rm *.elf

