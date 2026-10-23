int reverse(int n){
    long num=0;
    long dig;

    while(n!=0){
        dig=n%10;
        num=num*10+dig;
        n/=10;
    }

    if(num>INT_MAX || num<INT_MIN)
    return 0;
    else 
    return num;
}