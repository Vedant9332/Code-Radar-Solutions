int isPrime(int num){
    count=0;
    for(int i=2;i<=num;i++){
        if(num%i==0){
            count++;
        }
    if(count>2){
        return 0;
    }
    else{
        return 1;
    }
    }
}