class Solution {
public:
void merge(vector<int>& nums,int low,int mid,int high)
{
    vector<int>temp;
    int left=low;
   int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(nums[left]<=nums[right])
       { temp.push_back(nums[left]);
        left++;
       }
       else
       {
        temp.push_back(nums[right]);
        right++;
       }
    }
    while(left<=mid)
    {
        temp.push_back(nums[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(nums[right]);
        right++;
    }
    for (int k = 0; k < temp.size(); k++) {
    nums[low + k] = temp[k];
}

}
    void mergesort(vector<int>& nums,int low,int high) {
     //   int mid=(nums.size())/2;
        //int low=0;
       // int high=nums.size()-1;
        if(low>=high)
            return;
        
         int mid=(low+high)/2;
        if(low>=high)
        {
            return;
        }
        
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
         vector<int> sortArray(vector<int>& nums){
         mergesort(nums,0,nums.size()-1);
        return {nums};
    }
};