// This is a program to convert lowercase Text to UPPERCASE text.

#include <stdio.h>

char getUpperCase(char letter);

int main(){
    int n;

    printf(">> Enter String Length: ");
    scanf("%d", &n);
    getchar(); // because scanf letter a \n in buffer

    char string[n];
    printf(">> Enter a All LowerCase String: ");
    fgets(string, n, stdin);

    for( int i = 0; i < n-1; i++){ // n-1 because last is null zero
        string[i] = getUpperCase(string[i]);
    }

    printf(">> The Updated String is: %s", string);
    return 0;
}

char getUpperCase(char letter){
    if ('a' <= letter  && letter <= 'z'){
        return letter - 32;
    }
    else{
        return letter;
    }
}

/* Key Takeways: 1. scanf() leaves a \n in buffer, be vary of that.
                2. in subtracting the ascii value, only subtract the alphabet values
                3. char values do have integer values, so they can be treated as such.
*/