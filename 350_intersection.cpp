#include<bits/stdc++.h>

using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2){
    if(nums1.size()>nums2.size())
        return intersect(nums2,nums1);
    unordered_map<int, int> mp;
    for(auto i:nums1)
        ++mp[i];
    vector<int> ans;
    for(auto i:nums2){
        auto it=mp.find(i);
        if(it!=mp.end() and it->second-->0)
            ans.push_back(i);
    }
    return ans;
}

int main(){
    vector<int> arr1{4,9,5,4,4},arr2{9,4,9,8,4};
    vector<int> res;
    res=intersect(arr1,arr2);

    for(auto i: res)
        cout<<i<<" ";
    cout<<endl;
}