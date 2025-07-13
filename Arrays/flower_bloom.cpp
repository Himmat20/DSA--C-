class Solution {
public:

    bool ispossible(vector<int>& bloomDay, int m, int k,int mid){
        int flower=0;
        int bouque=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                flower++;
                if(flower==k){
                    bouque++;
                    flower=0;
                    if(bouque==m){
                        return true;
                    }
                }
            }else{
                flower=0;
            }
        }return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int st=*min_element(bloomDay.begin(),bloomDay.end());
        int end=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(ispossible(bloomDay,m,k,mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }return ans;
    }
};
