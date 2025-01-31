#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int lsb=(a>>0)&1;
    (lsb==1?printf("Set"):printf("Not Set"))
    return 0;
}