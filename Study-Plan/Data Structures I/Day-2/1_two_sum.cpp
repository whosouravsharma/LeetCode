#include<bits/stdc++.h>

using namespace std;

vector<int> twosum(vector<int> v, int target){
    unordered_map<int,int> mp;
    
    for(int i=0;i<v.size();i++){
        int z= target-v[i];
        if(mp.count(z))
            return {mp[z],i};
        else
            mp[v[i]]=i;
    }
    return {}; 
}

int main(){
    int len;
    cin>>len;
    vector<int> v;
    int target;
    for(int i=0;i<len;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>target;

    vector<int> ans;
    ans= twosum(v,target);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}