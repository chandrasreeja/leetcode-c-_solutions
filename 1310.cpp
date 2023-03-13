class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        int pre[n];
        pre[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1] ^ arr[i];
        }
        vector<int> res;
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            if(l==0) res.push_back(pre[r]);
            else res.push_back(pre[r] ^ pre[l-1]);
        }
        return res;
    }
};