#include<iostream>
#include<string>

class Solution{
    public:
        bool isSubsequence(std::string s, std::string t){
        int left=0, right=0, left_bound=s.length(), right_bound= t.length();
        while(left<left_bound and right<right_bound){
            if(s[left]==t[right]) left++;
            right++;
        }
        return s[left]==s[left_bound];  
    }
};

int main(){
    std::string sample;
    std::string target;

    std::cin>>sample;
    std::cin>>target;

    Solution s;

    std::cout<<s.isSubsequence(sample,target);
    return 0;
}