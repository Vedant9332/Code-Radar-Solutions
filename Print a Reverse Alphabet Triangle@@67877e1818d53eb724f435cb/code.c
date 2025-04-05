#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char pat='A';
        for(int j=1;j<=n-i+1;j++){
            printf("%c ",pat);
            pat++;
        }
        printf("\n");
    }

}

