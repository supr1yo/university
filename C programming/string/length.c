#include<stdio.h>
#include<string.h>

void comparing(char A[], char B[]){
    if(strcmp(A, B) == 0) {
        printf("%s == %s", A, B);
    } else if(strcmp(A, B) < 0) {
        printf("%s < %s", A, B);
    } else {
        printf("%s > %s", A, B);
    }
}

int main() {
    char A[10];
    char B[10];

    gets(A);
    gets(B);

    comparing(A, B);
}