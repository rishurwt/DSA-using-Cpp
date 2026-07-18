class Solution {
public:
    int findGCD(vector<int>& nums) {
        int ans = 1;
        int min = nums[0] ;
        int max = nums[0];
        int n = nums.size() - 1 ;
        int i = 1 ;
        while(i <= n){
            if(nums[i] > max){
                max = nums[i];
            }
            if(nums[i]< min) min = nums[i];
            i++;
        }
            for(int i = min  ; i >= 2 ; i--){
            if(min%i==0 && max%i==0) return i;
            }
            return ans;
        
    }
};