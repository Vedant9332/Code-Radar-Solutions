#include <stdio.h>


int main() {
    char a[50],b[50];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    printf("You entered: %s and\n %s",a,b);
    return 0;
}