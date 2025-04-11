#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=-5,second_largest=-6;
        for(int i=0;i<n;i++){
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