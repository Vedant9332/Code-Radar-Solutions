#include <stdio.h>



int main() {
    int a;
    scanf("%d",&a);
    int msb=(a>>31)&1;
    (msb==1?printf("Set"):printf("Not Set"));
    return 0;
}