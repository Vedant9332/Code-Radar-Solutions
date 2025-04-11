#include <stdio.h>

int main() {
    int n,count=0,found=0;
    scanf("%d",&n);
    int visitedArr[n];
    int majorityCriteria=n/2;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if (visitedArr[i]==1){
            continue;
        }
        count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                visitedArr[j]=1;
            }
        }
        if (count>majorityCriteria){
            printf("%d",arr[i]);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("-1");
    }
    }