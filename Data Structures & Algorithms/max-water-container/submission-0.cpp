class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxarea=0;

        while(left<right){
            int length=right-left;
        int width=min(heights[left],heights[right]);

        int area=length*width;
        if(area>maxarea){
            maxarea=area;
        }
        
        if(width==heights[right]){
            right--;
        }else{
            left++;
        }
        }

        return maxarea;
    }
};
