class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() == 0)
            return 0;
        
        int start = 0;
        int end = height.size() - 1;
        int maxArea = 0;
        
        while(start < end){
            int temp = (end - start) * (min(height[start], height[end]));
            if(temp > maxArea)
                maxArea = temp;
            
            if(height[start] == height[end]){
                start++;
                end--;
            }
            else if(height[start] > height[end])
                end--;
            else if(height[start] < height[end])
                start++;
        }
        
        return maxArea;
    }
};
