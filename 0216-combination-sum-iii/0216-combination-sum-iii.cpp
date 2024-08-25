class Solution {
public:
    void f(int i,int k,int n,vector<vector<int>>&ans,vector<int>&cv){
        if(n==0){
            if(k==0){
                ans.push_back(cv);
                return;
            }
        }
        if(i>9) return;
        cv.push_back(i);
        f(i+1,k-1,n-i,ans,cv);
        cv.pop_back();
        f(i+1,k,n,ans,cv);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>cv;
        f(1,k,n,ans,cv);
        return ans;
    }
};