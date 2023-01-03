class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0,first=0,maxe=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            first+=i*nums[i];
        }
        maxe=first;
        cout<<first;
        for(int i=nums.size()-1;i>=0;i--){
            first=first+sum-nums[i]*(nums.size());
            maxe=max(maxe,first);
        }
        return maxe;
    }
};