#include<stdio.h>
#include<ctype.h>
#include<string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    char str[10] = "Wow";
    char res[10] = "wow";

    str[0] = tolower(str[0]);

    int len = strlen(str);
    for(int i = 0, j = len - 1; i <= j; i++, j--) {
        swap(&str[i], &str[j]);

    }

    if(strcmp(str, res) == 0) {
        printf("yes");
    } else {
        printf("No");
    }

    
}