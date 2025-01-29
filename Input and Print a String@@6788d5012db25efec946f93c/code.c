#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[35];
    fgets(s,sizeof(s),stdin);
    printf("You entered: %s",s);
    return 0;
}