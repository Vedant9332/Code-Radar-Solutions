#include <stdio.h>


int main() {
    char name[40],hobby[50];
    int age;
    scanf("%d %d\n",name,age);
    scanf("%d",hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}