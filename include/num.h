#ifndef NUM_H
#define NUM_H

#include <stdio.h>

// Returns the maximum of two integers
int max(int a, int b);

// Reads a number of given size into array a
void readnum(int* a, int size_a);

// Returns the length of the number represented by array a
int length(int* a);

// Prints the number represented by array a to stdout
void printnum(int* a);

// Prints the number represented by array a to the given file
void printnumfile(int* a, FILE *f);

// Adds two numbers represented by arrays a and b, returns a pointer to the result
int* add(int* a, int* b);

#endif // NUM_H