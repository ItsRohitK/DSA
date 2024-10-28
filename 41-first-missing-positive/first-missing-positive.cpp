class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>st;
        int i=1;
        for(auto it:nums)st.insert(it);
        for(auto it:st){
            if(it<=0){
                continue;
                }
                else if(it==i){
                    i++;
                }
                else{
                    return i;
                }
        }
        if(nums[nums.size()-1]>0)return i;
        return 1;
    }
};