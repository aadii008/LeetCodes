class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int l[20000],r[20000];
        l[0]=height[0];
        r[n-1]=height[n-1];
        for (int i=1;i<n;i++){
        l[i]=max(l[i-1],height[i-1]);
        }
        for (int i=n-2;i>=0;i--){
        r[i]=max(r[i+1],height[i+1]);
        }
        int w=0;
        for(int i=1;i<n-1;i++){
        int c = min(l[i],r[i])-height[i];
        if(c>0){
        w+=c;
        }
        }
        return w;
    }
};