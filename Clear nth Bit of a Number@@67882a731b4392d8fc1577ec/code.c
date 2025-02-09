#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int result=a& ~(1<<b);
    printf("%d",&result);
    return 0;
}