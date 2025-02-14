#include <stdio.h>
int main(){
    int num;
    int count=0;
    scanf("%d",&num);
    for(int i=0;i<32;i++){
        count=i;
        if((num&(1<<32-i-1))!=0){
            break;
        }
    }
    printf("%d",count);
    return 0;
}