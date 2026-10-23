#include<limits.h>
int reverse(int x){
 long long n;
 long long num=0;

    while(x!=0){
    n=x%10;
    num=num*10+n;
    x=x/10;
    
 }
 if (num>INT_MAX || num<INT_MIN){
    return 0;
 }
 else
    return num;
}