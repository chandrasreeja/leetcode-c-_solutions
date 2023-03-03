class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        if(row==0)
            return false;
        int r=0,c=col-1;
        while(r<row && c>=0)
        {
            if(matrix[r][c]==target)
                return true;
            else if(matrix[r][c]>target)
            {
                c--;              
            }
            else
                r++;
        }
        return false;
    }
};