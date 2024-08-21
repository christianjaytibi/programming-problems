"""
  Project Euler #1: Multiples of 3 and 5

  Link to the problem:
  https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem
"""

#!/bin/python3

def solve(n, k):
    m = (n - 1) // k
    m = m * (m + 1) // 2
    return m * k


t = int(input())
arr = []
for _ in range(t):
    n = int(input())
    arr.append(n)

for n in arr:
    print(solve(n, 3) + solve(n, 5) - solve(n, 15))
