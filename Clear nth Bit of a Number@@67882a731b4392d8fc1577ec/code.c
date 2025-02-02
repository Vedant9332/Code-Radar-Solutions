#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int new_num=a>>b;
    printf("%d",(new_num)^(a<<b));
    return 0;
}