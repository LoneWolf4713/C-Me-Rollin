// This is a program to convert lowercase Text to UPPERCASE text.

#include <stdio.h>

char getLowerCase(char letter);

int main(){
    int n;

    printf(">> Enter String Length: ");
    scanf("%d", &n);
    getchar(); // because scanf letter a \n in buffer

    char string[n];
    printf(">> Enter a All UpperCase String: ");
    fgets(string, n, stdin);

    for( int i = 0; i < n-1; i++){ // n-1 because last is null zero
        string[i] = getLowerCase(string[i]);
    }

    printf(">> The Updated String is: %s", string);
    return 0;
}

char getLowerCase(char letter){
    if ('A' <= letter  && letter <= 'Z'){
        return letter + 32;
    }
    else{
        return letter;
    }
}

