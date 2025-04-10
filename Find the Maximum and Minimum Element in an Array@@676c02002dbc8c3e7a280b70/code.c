#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min_element=arr[0],max_element=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max_element){
            max_element=arr[i];
        }
        if(arr[i]<min_element){
            min_element=arr[i];
        }
    }
    printf("%d %d",min_element,max_element);
}

