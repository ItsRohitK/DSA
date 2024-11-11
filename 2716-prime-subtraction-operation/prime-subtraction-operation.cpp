class Solution {
public:
    int primelessthan(vector<int>vec,int n){
        int res=0;
        for(auto it:vec){
            if(it<n){
                res=it;
            }
            else{
                return res;
            }
        }
        
        return res;
    }
    vector<int> prime(int n){
        vector<int>vec;
        for(int i=2;i<=n;i++){
            int check=0;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    check=1;
                    break;
                }
            }
            if(check==0){
                vec.emplace_back(i);
            }
        }
        return vec;
    }
    bool primeSubOperation(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        vector<int>vec=prime(max);
        
        for(int i=0;i<nums.size();){
            if(i==0){
                int res=primelessthan(vec,nums[i]);
                nums[i]=nums[i]-res;
                i++;
            }
            else{
                if(nums[i]-nums[i-1]==1){
                    i++;
                    continue;
                }
                int temp=nums[i];
                while(true){
                    int res=primelessthan(vec,temp);
                    
                    if(res!=0 && nums[i]-res>nums[i-1]){
                        nums[i]=nums[i]-res;
                        i++;
                        break;
                    }
                    
                    else if(res==0){
                        if(nums[i]>nums[i-1]){
                            i++;
                            break;
                        }
                        return false;
                    }
                    else{
                        temp=res;
                    }
                }
            }
        }
        return true;

    }
};