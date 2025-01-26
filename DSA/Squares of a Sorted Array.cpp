class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
   vector<int> val;
        for(int i=0;i<nums.size();i++){
           
            val.push_back( nums[i]*nums[i]);
        }
         sort(val.begin(),val.end());
         return val;
    }
};
