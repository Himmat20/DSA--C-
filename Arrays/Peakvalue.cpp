#include<iostream>
#include<vector>
using namespace std;
int mount_peak2(vector<int> arr){
    int st=1,end=arr.size()-2;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid-1]<arr[mid]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }return -1;
}
int main(){
    vector<int> vec={0,3,8,9,5,2};
    int tar=0;
    cout<<mount_peak2(vec)<<endl;
}
