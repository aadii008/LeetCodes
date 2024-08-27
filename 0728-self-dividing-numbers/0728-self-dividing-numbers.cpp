class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int s=i;
            while(s>0){
             int a=s%10;
             if(a==0 || i%a!=0) break;
             s/=10;
            }
            if(s==0) ans.push_back(i);
        }
        return ans;
    }
};