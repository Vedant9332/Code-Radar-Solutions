#include <stdio.h>

int main() {
    int a,b;
    char opr[5];
    scanf("%d%d%s",&a,&b,&opr);
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