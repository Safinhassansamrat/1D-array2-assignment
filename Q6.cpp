// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<"enter the elements : ";
    //taking inputs
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0;i<n;i++){
        bool flag = false; 
       for(int j = 0;j<n;j++){
        if(i==j) continue;
        if(v[i]==v[j]){
            flag = true;
            break;
        }
       }
        if(flag==false){
            cout<<v[i];
            break;
        }
    }
   
}