#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int new_num=(a>>b)&1;
    printf("%d",(new_num)^((new_num<<b)&1));
    return 0;
}