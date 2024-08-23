class Solution {
public:
    #define endl '\n'
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    int getVal(int &i,const string e){
        string token = "";
        while(e[i]!='/'){
            token+=e[i];
            i++;
        }
        int num = stoi(token);
        return num;
    }
    int getMau(int &i,const string e){
        string token = "";
        while(i<e.size() && e[i]!='+' && e[i]!='-'){
            token+=e[i];
            i++;
        }
        int num = stoi(token);
        return num;
    }
    string fractionAddition(string e) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int dau1 = 1,dau2 = 1,i = 0;
        if(e[i]=='-'){
            dau1 = -1;
            i++;
        }
        int val1 = getVal(i,e);
        i++;
        int mau1 = getMau(i,e);
        while(i<e.size()){
            dau2 = (e[i]=='-'?-1:1);
            i++;
            int val2 = getVal(i,e);
            i++;
            int mau2 = getMau(i,e);
            int lcm = (mau1*mau2)/gcd(mau1,mau2);
            val1 = (dau1*val1*(lcm/mau1) + dau2*val2*(lcm/mau2));
            mau1 = lcm;
            if(val1<0){
                dau1 = -1;
                val1*=-1;
            }
            else{
                dau1 = 1;
            }
        }
        int ok = gcd(val1,mau1);
        if(ok>1){
            val1 = val1/ok;
            mau1 = mau1/ok;
        }
        string temp = "";
        temp+=(dau1==1?"":"-") + to_string(val1) + "/" + to_string(mau1);
        return temp;
    }
};