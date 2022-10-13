/* You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps */

#include<iostream>
#include<vector>

// DP:
// int climbstairs(int n){
//     int *dp=new int();
//     dp[1]=1;
//     dp[2]=2;
//     for(int i=3;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];;
//     dp[2]=2;
//     for(int i=3;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }

// Memoization:

class Solution{
    public:
        int climbstairs(int n){
            std::vector<int> memo(n+1,-1);
            return count(n,memo);
        }
        int count(int n, std::vector<int> &memo){
            if(n<0) return 0;
            if(memo[n]!= -1) return memo[n];
            if(n==0) return 1;
            return memo[n]=count(n-1,memo) + count(n-2, memo);
        }
};

int main(){
    int num;
    std::cin>>num;
    Solution s;
    int res=s.climbstairs(num);
    std::cout<<res<<std::endl;
    return 0;
}