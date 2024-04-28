#include<stdio.h>

int main() {
    FILE *fp;

    fp = fopen("test.txt", "w");
    fprintf(fp, "Womp!");

    fclose(fp);

}