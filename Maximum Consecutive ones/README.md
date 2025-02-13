# Maximum Consecutive Ones  

**Difficulty:** Easy  
**Accuracy:** 40/40  
**Contributed by:** Community  
**Upvotes:** 62  
**Asked in:** Various companies  

---

## Problem Statement  
You are given an array **‘ARR’** of length **‘N’** consisting of only **‘0’s** and **‘1’s**.  
Your task is to determine the **maximum length** of consecutive **1’s**.

---

## Example  

### Example 1:  
**Input:**  

2
8
0 1 1 0 0 1 1 1
4
0 1 1 0

**Output:**  

3
2

**Explanation:**  
- For the first test case, `ARR = [1, 1, 1, 1, 0, 0]`,  
  the maximum length of consecutive 1’s is **4** (from indices **0 to 3**).  
- For the second test case, `ARR = [1, 1, 1, 1]`,  
  the maximum length of consecutive 1’s is **4** (entire array).  

---

## Constraints  
- \( 1 \leq T \leq 10 \)  
- \( 1 \leq N \leq 1000 \)  
- \( ARR[i] \in \{0, 1\} \)  

**Time Limit:** 1 second  