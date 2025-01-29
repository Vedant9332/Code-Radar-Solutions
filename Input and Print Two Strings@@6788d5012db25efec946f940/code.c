#include <stdio.h>


int main() {
    char a[50],b[50];
    scanf("%s%s",a,b);
    // fgets(b,sizeof(b),stdin);
    printf("You entered: %s and %s",a,b);
    return 0;
}