#include <stdio.h>
int main(){
    int num,count;
    scanf("%d",&num);
    for(int i=1;i<32;i++){
        count=i;
        if((num&(1<<i-1))!=0){
            break;
        }
    }
    printf("%d",count);
    return 0;
}