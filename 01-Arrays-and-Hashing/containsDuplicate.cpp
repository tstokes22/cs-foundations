class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        bool isequal = false;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
            
                if (nums[i] == nums[j]){
                    isequal = true;
                    return isequal;
                }
            }
        }
        return isequal;
    }
};
