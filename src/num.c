#include "../include/fibonacci.h"
#include "../include/num.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a>b) ? a : b;
}

void readnum(int* a, int size_a) {

    int x;

    for (int i = 0; i<size_a; i++) {

        scanf("%1d", &x);
        int pos = size_a-i-1;
        *(a+pos) = x;

    }

    *(a+size_a) = -1;

}

int length(int* a) {

    int size = 0;

    while (*a!=-1) {
        size++;
        a++;
    }

    return size;

}

void printnum(int* a) {

    int size_a = length(a);

    for (int i =0; i<size_a; i++) {
        int pos = size_a -i-1;
        printf("%d", *(a+pos));
    }

}

void printnumfile(int* a, FILE *f) {

    int size_a = length(a);

    for (int i =0; i<size_a; i++) {
        int pos = size_a -i-1;
        fprintf(f, "%d", *(a+pos));
    }

}

int* add(int* a, int* b) {

    int size_a = length(a);
    int size_b = length(b);

    int size_res = max(size_a, size_b)+1;

    int* res = (int*)malloc((size_res+1) * sizeof(int));
    int* res_start = res;

    int carry = 0;
    int sum = 0;

    for (int i = 0; i<size_res-1; i++) {

        if (i>=size_b) {
            sum = (*a) + carry;
        }

        else if (i>=size_a) {
            sum = (*b) + carry;
        }

        else {
            sum = (*a) + (*b) + carry;
        }

        carry = sum/10;

        *res = sum%10;

        a++;
        b++;
        res++;

    }

    if (carry!=0) {
        *res = carry;
        res++;
    }

    *res = -1;

    return res_start;

}