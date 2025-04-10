#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int leftCheck=(i==0)||(arr[i]>arr[i-1]);
        int rightCheck=(i==n-1)||(arr[i]>arr[i+1]);

    if(leftCheck && rightCheck){
        printf("%d",arr[i]);
        break;
    }
    else{
        printf("%d",-1);
    }
    }
    return 0;
}