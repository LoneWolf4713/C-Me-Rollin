 // This is a C Program Demonstrating Different Methods to Swap Values

#include <stdio.h>

void withThirdVar(int* a, int* b);
void withoutThirdVarBitwise(int* a, int* b);
void withoutThirdvarArithmetic( int* a, int* b);

void main(){
    int a, b;
    printf(">> Enter Both Numbers With A Space B/W them: ");
    scanf("%d %d", &a, &b);

    withThirdVar(&a, &b);
    printf("a => %d, b => %d\n", a, b);

    withoutThirdVarArithmetic(&a, &b);
    printf("a => %d, b => %d\n", a, b);

    withoutThirdVarBitwise(&a, &b );
    printf("a => %d, b => %d\n", a, b);
}

void withThirdVar(int* a, int* b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void withoutThirdVarArithmetic(int* a, int* b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void withoutThirdVarBitwise( int* a, int* b){
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}