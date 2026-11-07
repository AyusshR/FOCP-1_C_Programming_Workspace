//Write a program to store data of 3 students
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
    strcpy(s1.name, "MistyMist");

    struct student s2;
    s1.roll = 384;
    s1.cgpa = 9.0;
    strcpy(s2.name, "BrockTheBuilder");

    struct student s3;
    s1.roll = 385;
    s1.cgpa = 9.7;
    strcpy(s3.name, "AshKetchup");

    struct student s4 = {386, 9.2, "Pika"}; // Works in the same way but in a single line 

    return 0;
}