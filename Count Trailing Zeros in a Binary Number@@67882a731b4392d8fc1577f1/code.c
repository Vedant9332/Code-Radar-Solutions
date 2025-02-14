#include <stdio.h>
int main(){
    int num,count;
    scanf("%d",&num);
    for(int i=0;i<32;i++){
        count=i;
        if((num&(1<<i))!=0){
            break;
        }
    }
    printf("%d",count);
    return 0;
}