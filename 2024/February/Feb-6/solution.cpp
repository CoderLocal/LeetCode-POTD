class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,int> m;
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            if(m.count(temp)){
                result[m[temp]].push_back(strs[i]);
            }
            else{
                m[temp] = result.size();
                result.push_back({strs[i]});
            }
        }
        return result;
    }
};
