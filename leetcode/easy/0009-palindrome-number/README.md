# Palindrome Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `x`, return `true` if `x` is a  **palindrome**, and `false` otherwise.

 

 **Example 1:** 

```
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

```

 **Example 2:** 

```
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

```

 **Example 3:** 

```
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

 

 **Follow up:**  Could you solve it without converting the integer to a string?

## Solution

**Language:** C  
**Runtime:** 11 ms (beats 6.62%)  
**Memory:** 8.7 MB (beats 81.36%)  
**Submitted:** 2026-10-23T21:27:16.537Z  

```c
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
```

---

[View on LeetCode](https://leetcode.com/problems/palindrome-number/)