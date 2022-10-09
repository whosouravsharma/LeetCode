/* The Fibonacci numbers, commonly denoted F(n) form a sequence, 
called the Fibonacci sequence, such that each number is the sum of 
the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.

Given n, calculate F(n). */

#include<iostream>

/* int fib(int n){
    int dp[2]={0,1};
    for(int i=0;i<n;i++){
        dp[i%2]+=dp[(i+1)%2];
    }
    return dp[n%2];
}*/

// reccusiron
/* int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
} */

// bottom-up approch
int fib(int n){
    if(n<=1)
        return n;
    int cache[n]={0};
    cache[1]=1;
    for(int i=2;i<=n;i++){
        cache[i]=cache[i-1]+cache[i-2];
    }
    return cache[n];
}

int main(){
    int num;
    std::cin>>num;
    int res=fib(num);
    std::cout<<"Value:\n";
    std::cout<<res<<std::endl;
    return 0;
}