#include<stdio.h>

int main() {
    char source[] = "abcd";
    char dest[10];

    int n = sizeof(source);
    int i = 0;
    while(source[0]!= n) {
        dest[i] = source[i];
        i++;
    }
}