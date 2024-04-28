#include<stdio.h>

int main() {
    char str[100] = "Supriyo";
    char ori[100] = str;
    int i = 0;
    while(str[i]!= sizeof(str)){
        char c= str[i];
        str[i] = str[i+1];
        str[i+1] = c;
    }

    printf("%s",str);
}