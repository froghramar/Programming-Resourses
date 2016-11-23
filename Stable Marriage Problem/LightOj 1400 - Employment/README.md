Problem Link : [LightOj 1400 - Employment](http://lightoj.com:81/volume/problem/1400)



Employment is a contract between two parties, one being the employer and the other being the employee. Now assume that there are n companies who require one employee each and there are n candidates. All the candidates interviewed in each of the companies and eventually they have different preferences over the companies and the companies have different preferences over the candidates.

So, you are given the task to assign each candidate to each company such that the employment scheme is stable. A scheme is stable if there is no pair (candidatei, companyj) and (candidatex, companyy) where

    Candidatei prefers companyy more than companyj and
    Companyy prefers candidatei more than candidatex.

As there can be many solutions, any valid one will do.
Input

Input starts with an integer T (≤ 30), denoting the number of test cases.

Each case starts with a line containing an integer n (1 ≤ n ≤ 100). The candidates are numbered from 1 to n and the companies are numbered from n+1 to 2n.

Each of the next n lines contains n distinct integers from n+1 to 2n, where the ith line contains the company preference for the ith candidate (1 ≤ i ≤ n).

Each of the next n lines contains n distinct integers from 1 to n, where the ith line contains the candidate preference for the company which is denoted by n+i (1 ≤ i ≤ n).
Output

For each case, print the case number and the (candidate, company) pairs. As there can be many solutions any valid one will do. And you can output the pairs in any order but print those as (candidate, company) pair.

<b>Sample Input</b>

1  
3  
4 5 6  
6 5 4  
5 4 6  
2 1 3  
1 2 3  
3 2 1  

	
<b>Output for Sample Input</b>

Case 1: (2 6) (1 4) (3 5)
