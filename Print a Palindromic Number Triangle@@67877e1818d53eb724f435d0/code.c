#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    int pattern=(j<=i)?i:((2*i)+1-j);
    for(i=1;i<=n;i++){
        for(j=1;j<2*i;j++){
            printf("%d",pattern);

        }
        printf("\n");
    }

}

