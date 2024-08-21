"""
  Project Euler #1: Multiples of 3 and 5

  Link to the problem:
  https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem
"""

from math import lcm


def solve(n):
    k = [3, 5, lcm(3, 5)]

    sum = 0
    for i in range(len(k)):
        m = (n - 1) // k[i]
        m = m * (m + 1) // 2

        if i == 2:
            sum -= m * k[i]
            break

        sum += m * k[i]

    print(sum)


t = int(input())
arr = []
for _ in range(t):
    n = int(input())
    arr.append(n)

for n in arr:
    solve(n)
