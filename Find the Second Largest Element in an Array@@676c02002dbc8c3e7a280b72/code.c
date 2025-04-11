#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=INT_MIN,second_largest=INT_MIN;
        // int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                second_largest=largest;
                largest=arr[i];
                // count++;

            }
            else if((arr[i]>second_largest)&&(arr[i]<largest)){
                second_largest=arr[i];
                // count++;
            }
        }
        if(count==0){
            second_largest=-1;
        }
            printf("%d",second_largest);
    
    }