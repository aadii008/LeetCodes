class Solution {
public:
    int lengthOfLastWord(string s) {
       int n=s.size();
       int cnt=0;
       bool a= false;
       for(int i=n-1;i>=0;i--){
        if(s[n-1])
        if(s[i]!=' '){
        cnt++;
        a=true;
        }
        else if (a) break;
       } 
       return cnt;
    }
};