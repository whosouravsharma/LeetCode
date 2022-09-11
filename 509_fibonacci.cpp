/* The Fibonacci numbers, commonly denoted F(n) form a sequence, 
called the Fibonacci sequence, such that each number is the sum of 
the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.

Given n, calculate F(n). */

#include<iostream>

int fib(int n){
    int dp[2]={0,1};
    for(int i=0;i<n;i++){
        dp[i%2]+=dp[(i+1)%2];
    }
    return dp[n%2];
}

int main(){
    int num;
    std::cin>>num;
    int res=fib(num);
    std::cout<<"Value:\n";
    std::cout<<res<<std::endl;
    return 0;
}