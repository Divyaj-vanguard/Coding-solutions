# Maximum Product of Three Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums`.

Find three numbers whose product is  **maximum**  and return the  **maximum**  product.

 

 **Example 1:** 

 **Input:**  nums = [1,2,-3]

 **Output:**  -6

 **Explanation:** 

The only three numbers are 1, 2, and -3, so the maximum product is `1  *2*  -3 = -6`.

 **Example 2:** 

 **Input:**  nums = [1,2,3,4]

 **Output:**  24

 **Explanation:** 

The largest product comes from the three greatest numbers: `2  *3*  4 = 24`.

 **Example 3:** 

 **Input:**  nums = [-1,-2,-3]

 **Output:**  -6

 **Explanation:** 

The only three numbers are -1, -2, and -3, so the maximum product is `(-1)  *(-2)*  (-3) = -6`.

 

 **Constraints:** 

- 3 <= nums.length <= 104
- -1000 <= nums[i] <= 1000

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.8 MB (beats 97.91%)  
**Submitted:** 2026-10-23T21:25:13.533Z  

```c
int maximumProduct(int* nums, int numsSize) {
    int i,max1=INT_MIN,max2=INT_MIN,max3=INT_MIN, min1=INT_MAX,min2=INT_MAX,first,second;
    for (i=0;i<numsSize;i++){
        if (nums[i]>max1){
            max3=max2;
            max2=max1;
            max1=nums[i];
        }
        else if (nums[i]>max2){
           max3=max2;
           max2=nums[i];

        }
        else if (nums[i]>max3){
            max3=nums[i];
        }

        if (nums[i]<min1){
           min2=min1;
           min1=nums[i];
        }
        else if (nums[i]<min2){
            min2=nums[i];
        }

        }

        first=min1*min2*max1;
        second=max1*max2*max3;
        if (first>second)
        return first;
        else
        return second;
}
   
    
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-product-of-three-numbers/)