#include<stdio.h>

void swap(int* x, int* y) {
    int temp =  *x;
    *x = *y;
    *y = temp;

}



int main() {
    int A[10] = {2,1,4,2,6,7123,2};
    int n = sizeof(A)/sizeof(A[0]);
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(A[j] > A[j+1]) {
                swap(&A[j], &A[j+1]);
            }
        }
    }


    
    printf("\nArray after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    
}