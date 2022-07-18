class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        int a;
        
        
        for(int i=n-1;i>=1;i--)
        {
            if(nums[i]>nums[i-1])
            {
                a=i-1; res=1;
                break;
            }
        }
        if(res==0)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
        int m=0;
        for(int i=a+1;i<n;i++)
        {
            if(nums[i]>nums[a])
            {
                if(m==0)
                {m=i;}
                else
                {
                    if(nums[i]<=nums[m])
                    
                        m=i;
                }
            }
                
        }
        swap(nums[a],nums[m]);
        reverse(nums.begin()+a+1,nums.end());
        }
        
    }
        
};