class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int maxi=0,n=0,cnt=0;
            while(nums[i]>0){
                maxi=max(maxi,nums[i]%10);
                nums[i]/=10;
                cnt++;
            }
            while(cnt!=0){
              n=n*10+maxi;
              cnt--;
            }
            sum+=n;
        }
        return sum;
    }
};