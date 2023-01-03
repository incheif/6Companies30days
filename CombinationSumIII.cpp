class Solution {
public:
    void func(int k,int n, int index,vector<vector<int>> &ans,vector<int>&temp){
        if(n==0 and k==0){
            temp.erase(temp.begin());
            ans.push_back(temp);
            temp.insert(temp.begin(), 0);
            return;
        }
        if(n<0){
            return;
        }
        for(int i=index;i<=9;i++){

            if(i!=temp.back()){
                temp.push_back(i);
                func(k-1,n-i,i+1,ans,temp);
                temp.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<vector<int>>ans;
       vector<int>temp;
       temp.push_back(0);
       func(k,n,1,ans,temp);
        return ans;
    }
}; 
