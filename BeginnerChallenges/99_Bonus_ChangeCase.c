// This is C Program To Change The Case of Letters in a string w/ C.
#include <stdio.h>

char getLowerCase(char c);
char getUpperCase(char c);

int main(){
    int n;
    printf(">> Enter Length Of String: ");
    scanf("%d", &n);
    getchar();

    char string[n];
    printf(">> Enter String: ");
    fgets(string, n, stdin);

    for (int i = 0; i < n -1; i++){
        
        if( 'a' <= string[i] && string[i] <= 'z' ){
            string[i] = getUpperCase(string[i]);
        }
        else if( 'A' <= string[i] && string[i] <= 'Z'){
            string[i] = getLowerCase(string[i]);
        }

    }
    printf(">> The Updates String is: %s", string);
}
char getLowerCase(char c){
    return c + 32;
}
char getUpperCase(char c){
    return c - 32;
}