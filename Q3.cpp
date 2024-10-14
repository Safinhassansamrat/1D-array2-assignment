// Check if the given array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
   for(int i = 0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }
   bool flag = false;
   for(int i = 0;i<n-1;i++){
    if(v[i]>v[i+1]){
        cout<<"the array is not sorted";
        return 0;
    }
    }
    cout<<"the array is sorted";

   }

   
