int reverse(int n){
    int c=0, i=0;
    int num=n;
    int dig;
    if (n<0){
        n*=-1;
    }
    while(n>0){
        n/=10;
        c++;
    }
    if(num<0){
        num*=-1;
    
    while(num>0){

    dig=num%10;
    i=i+dig*pow(10,c-1);
    num/=10;
    c--;
    }
    if(i>sizeof(int))
    return 0;
    else
    return -i;
    }
    else {
       while(num>0){

    dig=num%10;
    i=i+dig*pow(10,c-1);
    num/=10;
    c--;
    }
    if(i>sizeof(int))
    return 0;
    else
    return i;
}
}