class Solution {
public:
    int maxArea(vector<int>& height) {
        int area ,max_area=0;
        int i=0;
        int  n=height.size();
        int j=n-1;
        while(i<n &&  j>=0){
            area = min(height[i],height[j]) * (j-i);
            if(max_area<area) max_area=area;
            if(height[i]<height[j]) i++;
            else j--;
        }
        
        return max_area;
        
        
    }
};