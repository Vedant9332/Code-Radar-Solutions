int findUnsortedSubarray(int arr[], int n){
    int left=-1,right=-1;
    int i;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            left=i;
            break;
        }}
    for(i=n-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            right=i;
            break;
        }
    } 
    int min_val=arr[left],max_val=arr[right];
    for(i=left+1;i<=right;i++){
        if(arr[i]<min_val){
            min_val=arr[i];
        }
        if(arr[i]>max_val){
            max_val=arr[i];
        }
    }
    for(i=0;i<left;i++){
        if(arr[i]>min_val){
            left=i;
            break;
        }
    }
    for(i=n-1;i>right;i--){
        if(arr[i]<max_val){
            right=i;
            break;
        }
    }
    return right-left+1;
}