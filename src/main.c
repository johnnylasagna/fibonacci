#include "../include/fibonacci.h"
#include "../include/num.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size_a, size_b;

    printf("Enter size of first number: ");
    scanf("%d", &size_a);

    printf("Enter size of second number: ");
    scanf("%d", &size_b);

    int* a = (int*)malloc((size_a+1) * sizeof(int));
    printf("Reading first number\n");
    readnum(a,size_a);

    int* b = (int*)malloc((size_b+1) * sizeof(int));
    printf("Reading second number\n");
    readnum(b,size_b);

    printf("The first number is: ");
    printnum(a);
    printf("\n");

    printf("The second number is: ");
    printnum(b);
    printf("\n");

    int n;
    printf("Which terms of the sequence do you want: ");
    scanf("%d", &n);

    printfibfile(a,b,n);
    printf("Successfully stored to file");

    printfibsequence(a,b,n);
    printf("\n");

    int* fib = fibonacci(a,b,n);
    printnum(fib);
    printf("\n");

}
