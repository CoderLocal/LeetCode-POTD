class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> arr;
        int i,j,dif;
        for(i=0;i<nums.size();i+=3){
            dif=nums[i];
            arr.push_back(nums[i]);
            for(j=1;j<3;j++){
                if((nums[j+i]-nums[j+i]-1>k) ||(nums[j+i]-nums[i]>k)){
                    ans.clear();
                    return ans;
                }
                arr.push_back(nums[j+i]);
            }
            ans.push_back(arr);
            arr.clear();
        }
        return ans;

    }
};
