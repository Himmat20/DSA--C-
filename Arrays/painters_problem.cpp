// User function template for C++

class Solution {
  public:
    bool ispossible(vector<int>&arr ,int k,int n,int mid ){
        int n_painter=1;
        int t_board=0;
        for(int i=0;i<n;i++){
            if(arr[i]>mid){
                return false;
            }
            if(t_board+arr[i]<=mid){
                t_board+=arr[i];
            }else{
                n_painter++;
                if(n_painter>k){
                    return false;
                    
                }
                t_board=0;
                t_board+=arr[i];
            }
        }return true;
    }
  
    int minTime(vector<int>& arr, int k) {
        // code here
        int st = 0;
        int n = arr.size();
        int sum = 0;
        int ans=-1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int end=sum;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(ispossible(arr,k,n,mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }return ans;
        // return minimum time
    }
};
