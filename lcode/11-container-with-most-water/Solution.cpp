#include "../StandardHeaders.hpp"

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        return maxArea_2(height);
    }

    // naive: O(n^2)
    int maxArea_1(vector<int>& height){
        int vmax = 0;
        for(int i=0; i<height.size()-1; i++){
            for(int j=i+1; j<height.size(); j++){
                int curr = min(height[i], height[j]) * (j-i);
                vmax = max(vmax, curr);
            }
        }
        return vmax;
    }

    // optimal: O(n)
    int maxArea_2(vector<int>& height){        
        int l=0,r=height.size()-1;
        int ans=0;
        do{
            int h = min(height[l], height[r]);
            ans = max(ans, h * (r-l) );
            while (height[l] <= h && l<r) l++;
            while (height[r] <= h && l<r) r--;
        }
        while(l<r);
        return ans;
    }
};