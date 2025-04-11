#include <stdio.h>
int main(){
    int n,index=-1,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            index=i;
            break;
        }
    printf("%d",index);
    }


    }