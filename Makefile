all: spiral_grid

spiral_grid: spiral_grid.c
	gcc -lm -o spiral_grid spiral_grid.c

clean:
	rm spiral_grid

.PHONY: all clean
