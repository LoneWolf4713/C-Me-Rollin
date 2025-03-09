// This is a C Program to Perform Basic Arithmetic Functions
#include <stdio.h>

int main(){
    float n1, n2;
    scanf("%f %f", &n1, &n2);
    printf("Sum: %.2f, Difference: %.2f, Multiply: %.2f, Divide: %.2f, Modulo: %d", n1+n2, n1-n2, n1*n2, n1/n2, (int)n1%(int)n2);
}

// Key Learning: Modulo always takes int operands.