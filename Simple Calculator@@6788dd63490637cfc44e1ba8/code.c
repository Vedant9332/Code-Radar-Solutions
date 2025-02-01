#include <stdio.h>
int main() {
    int a, b;
    char opr;
    scanf("%d%d",&a,&b);
    getchar();
    scanf("%c",&opr);
    switch(opr){
        case('+'):
        printf("%d",a+b);
        break;
        case('-'):
            printf("%d",a-b);
            break;
        case('*'):
            printf("%d",a*b);
            break;
        case('/'):
            printf("%d",a/b);
            break;
        default:
            printf("Invalid");
            break;
    }
    return 0;
}