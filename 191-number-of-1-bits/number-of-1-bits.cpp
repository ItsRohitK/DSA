class Solution {
public:
    int hammingWeight(int n) {
        
        string s="";
        int num=n;
        while(num>0){
            char temp=(num%2+'0');
            s=s+temp;
            num/=2;
        }
        num=0;
        reverse(s.begin(),s.end());
        for(auto it:s){
            if(it=='1')num++;
        }
        return num;
    }
};