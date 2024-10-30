class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long num=2;
        if(n==1)return true;
        else if(n<1)return false;
        else{
            while(true){
                if(num==n)return true;
                else if(num>n)return false;
                else{num*=2;}
            }
        }
    }
};