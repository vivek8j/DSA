
#Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int>st(nums.begin(), nums.end());

        // for (int n:nums){
        //     if (st.find(n)!=st.end()){
        //         return true;
        //     }

        //     st.insert(n);
        // } 

        // return false;

        

        return nums.size()> st.size();
    }
};
