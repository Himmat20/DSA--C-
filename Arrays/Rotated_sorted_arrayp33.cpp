#include<iostream>
#include<vector>
using namespace std;
int r_binary(vector<int> arr, int tar){
    int st=0,end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==tar){
            return mid;
        }
        if(arr[st]<=arr[mid]){
            if(arr[st]<=tar && tar<=arr[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{
            if(arr[mid]<=tar && tar<=arr[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> vec={4,5,6,7,0,1,2,3};
    int tar=0;
    cout<<"is it working"<<endl;
    cout<<r_binary(vec,tar);
}
