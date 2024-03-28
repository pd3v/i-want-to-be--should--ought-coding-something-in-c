#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "rnd.h"

midi_t rnd(midi_t min , midi_t max) {
	return min + rand() % (max - min);
}

void fillStack(midi_t* arr, int size, midi_t min, midi_t max) {
	for (int i = 0; i < size; i++)
		arr[i] = rnd(min, max);
}