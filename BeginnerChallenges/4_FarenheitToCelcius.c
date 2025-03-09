// This is a C Program to Convert b/w Farenheit and Celcius.
#include <stdio.h>

float farenToCel(float faren);
float celToFaren(float cel);

int main(){
    int choice = 99;
    float input;
    printf("***********************\n");
    printf("*   1. Faren to Cel   *\n");
    printf("*   2. Cel To Faren   *\n");
    printf("***********************\n");
    
    while( (choice != 1) && (choice != 2) ){
        printf(">> Enter Choice: ");
        scanf("%d", &choice);
    }
    
    printf(">> Enter Initial Temp: ");
    scanf("%f", &input);

    if(choice == 1){
        printf("Celcius Equivalent of %.2f Farenheit is %.2f Celcius",input, farenToCel(input));
    }
    if(choice == 2){
        printf("Farenheit Equivalent of %.2f Celcius is %.2f Farenheit",input, celToFaren(input));
    }
}

float farenToCel(float input){
    return (input - 32) * 5.0/9.0;
}

float celToFaren(float input){
    return (input * (9.0/5.0)) + 32;
}

// Key Takeway: float division vs integer division in C.