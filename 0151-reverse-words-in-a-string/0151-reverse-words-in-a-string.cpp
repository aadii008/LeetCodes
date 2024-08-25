class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string helper = "";
        string result = "";
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                helper += s[i];
            } else if (!helper.empty()) {
                st.push(helper);
                helper = "";
            }
        }
        if (!helper.empty()) {
            st.push(helper);
        }

        while(!st.empty()){
            result += st.top();
            st.pop();
            if (!st.empty()) {
                result += " ";  
            }
        }
        return result;
    }
};
