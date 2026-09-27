bool isPalindrome(int x) {
    int n,temp=x;
    long num=0;
    while (x>0){
n=x%10;
num=num*10+n;
x=x/10;
    }
    if(num==temp)
    return true;
    else 
    return false;
}