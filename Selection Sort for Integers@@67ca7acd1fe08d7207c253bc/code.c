void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;i<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;

    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}