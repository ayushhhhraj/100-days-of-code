#include<stdio.h> 
struct DOB { 
    int day; 
    int month; 
    int year; };
struct student 
{ int rollno; 
    char name[20]; 
    struct  DOB date; };
    void main() { 
        struct student s;
         printf("Enter Student Rollno :\n"); 
         scanf("%d",&s.rollno); 
         printf("Enter Student Name :\n"); 
         scanf("%s",s.name); 
         printf("Enter date of birth as day month year:\n"); 
         scanf("%d%d%d",&s.date.day,&s.date.month,&s.date.year); 
         printf("Student Details are\n"); 
         printf("Student Rollno = %d\n",s.rollno); 
         printf("Student Name=%s\n",s.name); 
         printf("Student DOB= %d-%d-%d\n", s.date.day, s.date.month,  s.date.year); 
        }