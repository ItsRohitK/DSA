class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0,end=height.size()-1;
        int maxi=INT_MIN;
        while(start<end){
            if(min(height[start],height[end])*(end-start)>maxi){
                maxi=min(height[start],height[end])*(end-start);
                
            }
            if(height[start]<=height[end]){
                    start++;
                }
                else{
                    end--;
                }
        }
        return maxi;
    }
};