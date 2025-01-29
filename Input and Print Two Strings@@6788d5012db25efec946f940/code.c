#include <stdio.h>


int main() {
    char a[10],b[10];
    fgets(a\n,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    printf("You entered: %s and\n %s",a,b);
    return 0;
}