#include<bits/stdc++.h>
#include<vector>

using namespace std;

int max_subarray(vector<int> &nums){
    int max_so_far=INT_MIN, max_till_now=0;
    for(int i=0;i<nums.size();i++)
    {
        max_till_now += nums[i];
        if(max_so_far<max_till_now)
            max_so_far=max_till_now;
        if(max_till_now<0)
            max_so_far=0;
    }
    return max_so_far;
}

int main(){
    vector<int> input;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        input.push_back(x);
    }
    int res=max_subarray(input);

    return res;
}