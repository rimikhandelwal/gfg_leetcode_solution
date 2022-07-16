class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        int n=in.size();
        vector<vector<int>>v;
        sort(in.begin(),in.end());
        for(int i=0;i<n;i++)
        {
            if(v.empty())
            {
                v.push_back(in[i]);
            }
            else
            {
                vector<int>&a=v.back();
                int y=a[1];
                if(y>=in[i][0])
                {
                    a[1]=max(y,in[i][1]);
                }
                else
                {
                    v.push_back(in[i]);
                }
            }
                
        }
        return v;
    }
};