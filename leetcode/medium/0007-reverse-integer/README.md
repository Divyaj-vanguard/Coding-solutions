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
**Runtime:** 4 ms (beats 24.69%)  
**Memory:** 9 MB (beats 94.11%)  
**Submitted:** 2026-10-23T21:23:01.429Z  

```c
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
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)