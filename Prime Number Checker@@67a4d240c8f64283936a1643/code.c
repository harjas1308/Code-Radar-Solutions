// Your code here...
int isPrime(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }else{
            continue;
        }
    }
    if(count==2){
        return 1;
    }else{
        return 0;
    }
}