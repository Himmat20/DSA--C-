class Solution {
public:
    bool ispossible(vector<int>&nums, int k,int n,int mid){
        int pcount=0;
        int scount=1;
        for(int i=0;i<n;i++){
            if(pcount+nums[i] <= mid){
                pcount+=nums[i];
            }else{
                scount++;
                if(scount>k||nums[i]>mid){
                    return false;
                }
                pcount=nums[i];
            }
        }
        return true;

    }
    int splitArray(vector<int>& nums, int k) {
        int st=0;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int end=sum;
        int ans=-1;
        
        while(st<=end){
            int mid=st+(end-st)/2;
            if(ispossible(nums,k,n,mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
            // mid=(st+end-st)/2;

        }
        return ans;
    }
};
