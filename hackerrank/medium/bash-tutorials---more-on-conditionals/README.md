# Getting started with conditionals

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given three integers ($X$, $Y$, and $Z$) representing the three sides of a triangle, identify whether the triangle is scalene, isosceles, or equilateral.

- If all three sides are equal, output `EQUILATERAL`.  
- Otherwise, if any two sides are equal, output `ISOSCELES`.  
- Otherwise, output `SCALENE`.  

**Input Format**

Three integers, each on a new line.

**Constraints**

$1 \le X,Y,Z \le 1000$  
The sum of any two sides will be greater than the third.  


**Output Format**

One word: either "SCALENE" or "EQUILATERAL" or "ISOSCELES" (quotation marks excluded).

## Solution

**Language:** Bash  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-16T17:04:14.931Z  

```sh
read -r a
if [[ "$a" == 'Y' || "$a" == 'y' ]]
then
    echo "YES"
elif [[ "$a" == 'N' || "$a" == 'n' ]]
then
    echo "NO"
fi


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/bash-tutorials---more-on-conditionals/problem)