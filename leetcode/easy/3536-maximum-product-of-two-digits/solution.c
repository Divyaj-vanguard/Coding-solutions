    int maxProduct(int n){
    int n1,n2,c=0,arr[100], max1=INT_MIN,i, max2=INT_MIN;
    int num=n;
    while(n>0){
        n=n/10;
        c++;
    }
    for (i=0;i<c;i++){
    arr[i]=num%10;
    num=num/10;
    }
    for (i=0;i<c;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if (arr[i]>max2){
            max2=arr[i];
        }
        }
    return max1*max2;
    }