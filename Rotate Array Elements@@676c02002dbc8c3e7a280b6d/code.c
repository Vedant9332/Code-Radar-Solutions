int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    scanf("%d",&k);

    if(k>n){
        k=k%n;
    }
    while(n-k<n-1){
        temp=arr[n-k];
        arr[n-k]=arr[n-1];
        arr[n-1]=temp;
    }
    while(0<n-k-1){
        temp=arr[0];
        arr[0]=arr[n-k-1];
        arr[n-k-1]=temp;
    }
    while(0<n-1){
        temp=arr[0];
        arr[0]=arr[n-1];
        arr[n-1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}