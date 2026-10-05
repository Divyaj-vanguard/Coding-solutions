# Valid Parenthesis String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s` containing only three types of characters: `'('`, `')'` and `' *'`, return `true`* if *`s`* is  **valid** *.

The following rules define a  **valid**  string:

- Any left parenthesis '(' must have a corresponding right parenthesis ')'.
- Any right parenthesis ')' must have a corresponding left parenthesis '('.
- Left parenthesis '(' must go before the corresponding right parenthesis ')'.
- '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".

 

 **Example 1:** 

```
Input: s = "()"
Output: true

```

 **Example 2:** 

```
Input: s = "(*)"
Output: true

```

 **Example 3:** 

```
Input: s = "(*))"
Output: true

```

 **Example 4:** 

```
Input: s = "("
Output: false

```

 

 **Constraints:** 

- 1 <= s.length <= 100
- s[i] is '(', ')' or '*'.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.8 MB  
**Submitted:** 2026-10-05T17:25:54.606Z  

```cpp
class Solution {
public:
    bool checkValidString(string s) {
        int i,c=0;
        if(s.size()==1)
        c=1;
        else{
            for (i=0;i<s.size();i++){
                if(s[i]=='(')
                c+=1;
                else if(s[i]==')')
                c-=1;
        }
        for(i=0;i<s.size();i++){
            if(c>=1){
                if(s[i]=='*')
                c-=1;
            }
            else if(c<0){
                if(s[i]=='*'){
                    c+=1;
                }
            }
        }
        }

        if(c==0){
            return true;
        }
        else return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-parenthesis-string/)