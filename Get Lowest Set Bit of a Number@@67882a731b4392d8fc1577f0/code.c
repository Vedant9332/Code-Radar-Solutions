#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<32;i++){
        if((num&(1<<i))!=0){
            printf("%d",i);
            break;
        }
    }    
    return 0;
}