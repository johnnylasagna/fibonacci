#include "../include/fibonacci.h"
#include "../include/num.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int* fibonacci(int* a, int* b, int n) {

    for (int i = 0; i<n-1; i++) {

        int* new_b = add(a,b);
        int* new_a = b;

        if (i>1) {
            free(a);
        }

        a = new_a;
        b = new_b;

    }

    return a;

}

void printfibsequence(int* a, int* b, int n) {

    for (int i = 0; i<n-1; i++) {

        printnum(a);

        if (i!=n-2) {
            printf(", ");
        }

        int* new_b = add(a,b);
        int* new_a = b;

        if (i>1) {
            free(a);
        }

        a = new_a;
        b = new_b;

    }

}

void printfibfile(int* a, int* b, int n) {

    FILE *f;

    f = fopen("../output/fib.txt", "w");

    for (int i = 0; i<n-1; i++) {

        printnumfile(a, f);

        if (i!=n-2) {
            fprintf(f, "\n");
        }

        int* new_b = add(a,b);
        int* new_a = b;

        if (i>1) {
            free(a);
        }

        a = new_a;
        b = new_b;

    }

    fclose(f);

}