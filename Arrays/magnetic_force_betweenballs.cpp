class Solution {
public:

    bool ispossible(vector<int>& arr,int m ,int n,int mid ){
        int balls=1;
        int dist = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]-dist>=mid){
                balls++;
                if(balls>=m){
                    return true;
                }
                dist=arr[i];
            }
        }return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int st=0;
        int n = position.size();
        sort(position.begin(),position.end());
        int ans=-1;
        int end = position[n-1]-position[0];
        while(st<=end){
            int mid = st + (end-st)/2;
            if(ispossible(position,m,n,mid)){
                ans=mid;
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};
