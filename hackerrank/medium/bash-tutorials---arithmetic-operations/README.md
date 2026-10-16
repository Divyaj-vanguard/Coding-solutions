# More on Conditionals

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A mathematical expression containing +,-,\*,^, / and parenthesis will be provided.  Read in the expression, then evaluate it.  Display the result rounded to $3$ decimal places.  



**Input Format**

 

**Constraints**

All numeric values are <= 999. 

**Output Format**

## Solution

**Language:** Bash  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-16T17:08:41.621Z  

```sh
read -r x
read -r y
read -r z
if [[ $x == $y && $y == $z ]]
then 
    echo EQUILATERAL
elif [[ $x == $y || $x == $z || $y == $z ]]
then
    echo ISOSCELES
else
    echo SCALENE
fi

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/bash-tutorials---arithmetic-operations/problem)