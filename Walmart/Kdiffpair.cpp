
#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map <int,pair<bool,int>> m;
        int count=0;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]={true,i};
        }
        for (int i=0;i<nums.size();i++){
            int n=nums[i]+k;
            if ((m.find(n)!=m.end()) && (m[n].first==true) && (m[n].second!=i)){
                count++;
                m[n].first=false;
            }
        }
        return count;
        
    }
};