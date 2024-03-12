// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

void cryptage(char p[],int decalage) {
    int i = 0;
    while(p[i]!='\0') {
        p[i] += decalage;
        if(p[i] > 255) {
            p[i] -= 255;
        } 
        i++;
    }
}


int main() {
    char password[20];
    scanf("%s",&password);
    cryptage(password,1);
    printf("\n%s",password);
    
}