# The World of Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two integers, $X$ and $Y$, identify whether $X \lt Y$ or $X \gt Y$ or $X = Y$.   


Exactly one of the following lines:   
- _X is less than Y_   
- _X is greater than Y_   
- _X is equal to Y_ 

**Input Format**

Two lines containing one integer each ($X$ and $Y$, respectively).  


**Constraints**

-

**Output Format**

Exactly one of the following lines:   
- _X is less than Y_   
- _X is greater than Y_   
- _X is equal to Y_

## Solution

**Language:** Bash  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-16T15:35:48.088Z  

```sh
read -r x
read -r y
echo "$(($x+$y))"
echo "$(($x-$y))"
echo "$(($x*$y))"
echo "$(($x/$y))"

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/bash-tutorials---comparing-numbers/problem)