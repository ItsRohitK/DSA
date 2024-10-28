class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxlength=1;
        map<int,int>mpp;
        for(auto it:nums){
            auto num=sqrt(it);
            if(floor(num)==num && ceil(num)==num){
                auto pos=mpp.find(num);
            if(pos==mpp.end() && mpp.find(it)==mpp.end()){
                mpp[it]++;
            }
            else if(pos!=mpp.end()){
                mpp[it]=(*(pos)).second +1;
                mpp.erase((*(pos)).first);
            }
            }
            else{
                if(mpp.find(it)==mpp.end())mpp[it]++;
            }
            
        }
        for(auto it:mpp){
            maxlength=max(maxlength,it.second);
        }
        if(maxlength==1)return -1;
        else{return maxlength;}
    }
};