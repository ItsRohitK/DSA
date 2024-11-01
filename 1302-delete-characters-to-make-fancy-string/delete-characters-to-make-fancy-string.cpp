class Solution {
public:
    string makeFancyString(string s) {
        int count=1;
        char ch=s[0];
        string str="";
        str+=ch;
        if(s.size()<=2){
            return s;
        }
        for(int i=1;i<s.size();i++){
            if(s[i]==ch){
                if(count>=2){
                    continue;
                }
                count++;
            }
            else{
                count=1;
                ch=s[i];
            }
            str += ch;
        }
        return str;
    }
};