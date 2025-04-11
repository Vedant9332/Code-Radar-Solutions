#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0],second_largest=arr[1];
        for(int i=2;i<n;i++){
            if(arr[i]>largest){
                second_largest=largest;
                largest=arr[i];

            }
            else if((arr[i]>second_largest)&&(arr[i]<largest)){
                second_largest=arr[i];
            }
        }
            printf("%d",second_largest);
    
    }