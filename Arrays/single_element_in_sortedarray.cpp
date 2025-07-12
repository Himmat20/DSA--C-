#include<iostream>
#include<vector>
using namespace std;
int singlelement(vector<int> arr){
    int n = arr.size();
    if(n==1) return arr[0];
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[n-1]!=arr[n-2]) return arr[n-1];
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i]!=arr[i-1]&&arr[i]!=arr[i+1]){
            return arr[i];
        }
    }return -1;
}
int singlelement2(vector<int> arr){
    int n= arr.size();
    int st=0,end=arr.size()-1;
    if(arr.size()==1) return arr[0];
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0 && arr[0]!=arr[1]) return arr[mid];
        if(mid==n-1 && arr[n-1]!=arr[n-2]) return arr[mid];

        if(arr[mid]!=arr[mid+1]&& arr[mid]!=arr[mid-1]){
            return arr[mid];
        }
        if(mid%2==0){ //even
            if(arr[mid]==arr[mid-1]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{ //odd
            if(arr[mid]==arr[mid-1]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }return -1;
}
int main(){
    vector<int> vec={1,1,3,3,4,4,5,6,6};
    cout<<singlelement2(vec)<<endl;
}
