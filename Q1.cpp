// Count the number of elements strictly greater than x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<"enter the elements : ";
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x;
    cout<<"enter the X : ";
    cin>>x;
    int count=0;
    for(int i = 0;i<n;i++){
        if(v[i]>x) count++;
    }
    cout<<"the number of elements greater than X is : "<<count;
}