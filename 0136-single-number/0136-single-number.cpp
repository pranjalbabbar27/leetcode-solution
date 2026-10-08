class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int hash[60001]={0};
    for(int i=0;i<nums.size();i++)
    {
        hash[nums[i]+30000]+=1;
    }
    for(int i=0;i<60001;i++)
    {
        if(hash[i]==1)
        return i-30000;
    }
return{};
    }
};