// User function Template for C++
class Solution {
  public:
    bool ispossible(vector<int> &stalls, int k, int n,int mid){
        int dbt=stalls[0];
        int cow=1;
        for(int i=0;i<n;i++){
            if(stalls[i]-dbt>=mid){
                cow++;
                if(cow>=k){
                    return true;
                }
                dbt=stalls[i];
            }
        }return false;
    }
    
  

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        int st=0;
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int end=stalls[n-1]-stalls[0];
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(ispossible(stalls,k,n,mid)){
                ans=mid;
                st=mid+1;
            }else{
                end=mid-1;
            }
        }return ans;
        
    }
};
