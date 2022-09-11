#include<iostream>
#include<vector>
#include<set>

using namespace std;
bool containsDuplicate(vector<int> &nums){
    set<int> s;
    int len=nums.size();
    for(int i=0;i<len;i++){
        s.insert(nums[i]);
    }
    if(s.size()==nums.size())
        return false;
    return true;
}
int main(){
    vector<int> input;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        input.push_back(x);
    }

    bool res=containsDuplicate(input);
    cout<<res<<endl;
    return 0;
}