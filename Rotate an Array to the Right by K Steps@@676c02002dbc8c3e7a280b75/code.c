#include <stdio.h>
void reverse(int arr[],int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&k);
    k=k%n;
    reverse(arr,n-k,n-1);//reverse from k to end 
    reverse(arr,0,n-k-1);//reverse till k
    reverse(arr,0,n-1);//reverse whole arr
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}