#ifndef FIBONACCI_H
#define FIBONACCI_H

// Returns a pointer to the nth Fibonacci number, given pointers to the first two numbers and n
int* fibonacci(int* a, int* b, int n);

// Prints the Fibonacci sequence of length n, starting from a and b
void printfibsequence(int* a, int* b, int n);

// Writes the Fibonacci sequence of length n to "fib.txt", starting from a and b
void printfibfile(int* a, int* b, int n);

#endif // FIBONACCI_H