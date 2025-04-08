int findUnsortedSubarray(int arr[], int n){
    int left=-1,right=-1;
    for(int i=0;i<=n;i++){
        if(arr[i]>arr[i+1]){
            left=i;
            break;
        }}
    for(int i=n-1;i<=0;i--){
        if(arr[i]<arr[i-1]){
            right=i;
            break;
        }
    } 
    int min_val=arr[left],max_val=arr[right];
    for(int i=left+1;i<=right;i++){
        if(arr[i]<min_val){
            min_val=arr[i];
        }
        if(arr[i]>max_val){
            max_val=arr[i];
        }
    }
    for(int i=0;i<left;i++){
        if(arr[i]>min_val){
            left=i;
        }
    }
    for(int i=n-1;i>right;i--){
        if(arr[i]<max_val){
            right=i;
        }
    }
    return right-left+1
}