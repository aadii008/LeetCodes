class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        
        int x0=points[0][0],y0=points[0][1];
        int x1=points[1][0],y1=points[1][1];
        int x2=points[2][0],y2=points[2][1];
        
        return(x0*(y1-y2))+(x1*(y2-y0))+(x2*(y0-y1));
    }
};