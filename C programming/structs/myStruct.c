#include<stdio.h>

struct Student{
    char name[50];
    int roll;
    int A[5];

} Noobs[100];

int main(){
    struct Student Stud1 = {"Sup", 60, {1,2,3,4,5}};
    for(int i = 0; i < 5; i++) {
        printf("%d\n", Stud1.A[i]);
    }
    printf("%s", Stud1.name);
}