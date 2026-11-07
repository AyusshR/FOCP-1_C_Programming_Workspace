#include <stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 383;
    s1.cgpa = 9.8;
    strcpy(s1.name, "Ayush");

    printf("Your Roll no: %d\n", s1.roll);
    printf("Your Name is: %s\n", s1.name);
    printf("Your CGPA is: %.1f\n", s1.cgpa);

    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
