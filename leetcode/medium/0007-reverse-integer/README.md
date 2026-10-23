# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C  
**Runtime:** 0 ms  
**Memory:** 8.5 MB  
**Submitted:** 2026-10-23T21:12:01.403Z  

```c
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
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)