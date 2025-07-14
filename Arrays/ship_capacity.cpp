class Solution {
public:

    bool ispossible(vector<int> arr,int days,int n,int mid){
        int day=1;
        int weight=0;
        for(int i=0;i<n;i++){
            if(weight+arr[i]>mid){
                day++;
                if(day>days){
                    return false;
                }
                weight=arr[i];
            }else{
                weight=weight+arr[i];
            }
        }return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int st=*max_element(weights.begin(),weights.end());
        // int sum=0;
        int ans=-1;
        int n=weights.size();
        // for(int i=0;i<n;i++){
            // sum+=weights[i];
        // } 
        // int end=sum;
        int end = accumulate(weights.begin(),weights.end(),0);
        while(st<=end){
            int mid=st+(end-st)/2;
            if(ispossible(weights,days,n,mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }return ans;
    }
};
