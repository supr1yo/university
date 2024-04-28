#include<stdio.h>

int main() {
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int splitIndex = 6;
    int B[100], C[100];

    for(int i = 0; i < splitIndex; i++) {
        B[i] = A[i];
    }

    for(int i = splitIndex; i < 10; i++) {
        C[i - splitIndex] = A[i];
    }


     
    printf("First Array: ");
    for (int i = 0; i < splitIndex; i++) {
        printf("%d ", B[i]);
    }
    
    printf("\n");

    printf("Second Array: ");
    for (int i = 0; i < 10 - splitIndex; i++) {
        printf("%d ", C[i]);
    }
}