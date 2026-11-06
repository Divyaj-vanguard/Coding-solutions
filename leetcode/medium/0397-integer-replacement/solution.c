int integerReplacement(long long n) {
    int count=0, f=0;
    while(n>1){
        if(n%2==0){
            n/=2;
            count++;
        
        }
        else if(n==3){
            return count+2;
        }

        else if(((n-1)/2)%2==0){
            n-=1;
            count++;

        }
        else{
            n+=1;
            count++;
        }
           
            }
    return count;

    
}