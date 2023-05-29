CC := gcc
#CFLAGS := 
DEST := ./build/

all: bubble_sort.c
	mkdir -p build
	$(CC) bubble_sort.c -lcs50 -o $(DEST)/bubble_sort 