#include <stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
        return 0;
    }
    int i;
    for(i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    if (count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    }
}