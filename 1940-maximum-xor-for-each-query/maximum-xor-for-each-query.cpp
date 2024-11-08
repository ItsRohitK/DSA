class Solution {
public:
    
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>vec;
        int i=0;
        int maxi=pow(2,maximumBit)-1;
        long temp=0;
        while(i<nums.size()){
            temp=temp^nums[i];
            long res=temp^maxi;
            if(res<pow(2,maximumBit)){
                vec.insert(vec.begin(),res);
            }
            i++;
        }
        return vec;
    }
};