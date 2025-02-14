#include <stdio.h>
int main(){
    int num;
    int count=0;
    scanf("%d",&num);
    for(int i=0;i<32-i;i++){
        count+=1;
        if((num&(1<<32-i))!=0){
            break;
        }
        printf("%d",count);
    }
    return 0;
}