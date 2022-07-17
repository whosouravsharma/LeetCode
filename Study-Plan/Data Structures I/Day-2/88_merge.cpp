#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &nums1, vector<int> &nums2,int &m, int &n){
    for(int i=m;i<nums1.size();i++)
        nums1[i]=nums2[i-m];
    sort(nums1.begin(),nums1.end());
}

int main(){
    int m=3,n=3;
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);

    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);

    for(auto i:nums1)
        cout<<i<<" ";
    cout<<endl;
    
    merge(nums1,nums2,m,n);

    for(auto i:nums1)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}