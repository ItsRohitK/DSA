class Solution {
public:
    double myPow(double x, int n) {
        double res=1;
        if(n==0)return 1.00000;
        else if(x==0)return x;
        else if(n==1)return x;
        else if(x==1 || (x==-1 && n%2!=0))return x;
        else if(x==-1 && n%2==0)return -x;
        else if(n>1){
            for(int i=1;i<=n;i++){
                res*=x;
                if(res==0.00000)return res;
                if(i==2147483647)break;
            }
        }
        else if(n<0){
            x=1/x;
            if(n==-2147483648){
                n=2147483647;
            }
            else{
                n=-(n);
            }
            
            for(int i=1;i<=n;i++){
                res*=x;
                if(res==0.00000)return res;
                if(i==2147483647)break;
            }
        }
        return res;
    }
};