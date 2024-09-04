class Solution {
public:
    int lengthOfLastWord(string s) {
       int n=s.size();
       int cnt=0;
       int a=0;
       for(int i=n-1;i>=0;i--){
        if(s[i]!=' '){
            cnt++;
            a=1;
        }
        else if (a==1) break;
       } 
       return cnt;
    }
};