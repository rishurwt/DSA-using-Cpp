class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0 , end = numbers.size() - 1;
        while(start<end){
            if(numbers[start] + numbers[end] == target){
                return {++start,++end};
            }
            else if(numbers[start] + numbers[end] < target){
                start++;
            }
            else{//(numbers[start] + numbers[end] > target)
                end--;
            }
        }
        return {};
    }
};