class Solution {
public:
int countBits(int number) { 
    int count = 0;          
    while (number > 0) {
        count++;
        number >>= 1;  
    }
    return count;
}
    int findComplement(int num) {
        int n=countBits(num);
        
        for(int i=0;i<n;i++){
            num=num^(1<<i); 
        }
        return num;
    }
};