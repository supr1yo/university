#include <stdio.h>

int prime(int num) {
    int count = 0;
    int j;
    for(int i = 1; i <= num; i++) {
        if(num % i == 0){
            count += 1;
            j = i;
        }
    }

    if (count < 2) {
        printf("%d",j);
    } else {
        
    }
}

int main() {
   prime(5);
}