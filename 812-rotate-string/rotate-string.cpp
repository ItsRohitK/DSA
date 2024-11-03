class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0;
        while(i<s.length()){
            if(s==goal){
                return true;
            }
            else{
                
                    char temp=s[0];
                    s.erase(0,1);
                    s.insert(s.begin()+s.length(),temp);
                
            }
            i++;
        }
        return false;
    }
};