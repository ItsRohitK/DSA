class Solution {
public:
    int fun(int n){
        int length=to_string(n).size();
        int res=0;
        
        while(n>0){
            int temp=n%10;
            res=res+pow(temp,2);
            n/=10;
        }
        return res;
    }
    bool isHappy(int n) {
        vector<int>vec;
        int temp=n;
        while(true){
            long res=fun(temp);
            if(res==1)return true;
            else if(find(vec.begin(),vec.end(),res)!=vec.end())return false;
            else{
                vec.emplace_back(res);
                temp=res;
            }
        }
    }
};