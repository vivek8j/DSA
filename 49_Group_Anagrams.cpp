// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]

// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>>mp;

        for(auto x: strs){
            string temp=x;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(x);
        }

        vector<vector<string>>ans;

        for(auto x:mp){
            ans.push_back(x.second);
        }        

        return ans;
    }
