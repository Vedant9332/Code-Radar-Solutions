#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<2*i;j++){
        int pattern=(j<=i)?j:((2*i)-j);
            printf("%d",pattern);

        }
        printf("\n");
    }

}

