/* The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn. */

#include<iostream>

int trib(int n){
    int dp[3]={0,1,1};
    for(int i=3;i<=n;i++){
        dp[i%3]+=dp[(i+1)%3]+dp[(i+2)%3];
    }
    return dp[n%3];
}

int main(){
    int num;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>num;
    int res= trib(num);
    std::cout<<res<<std::endl;
    return 0;
}