#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int roll;
    int age;
};
int main(){
    struct student s1;
    scanf("%s",s1.name);
    scanf("%d",&s1.roll);
    scanf("%d",&s1.age);
    puts(s1.name);
    printf("%d", s1.roll);
    printf("%d",s1.age);
}