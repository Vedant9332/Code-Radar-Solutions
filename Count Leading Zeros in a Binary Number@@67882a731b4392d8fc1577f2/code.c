#include <stdio.h>
int main(){
    int num;
    int count=0;
    scanf("%d",&num);
    for(int i=1;i<32;i++){
        count=i;
        if((num&(1<<32-i))!=0){
            break;
        }
    }
    printf("%d",count);
    return 0;
}