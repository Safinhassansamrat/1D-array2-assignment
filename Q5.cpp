// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i = 0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<"enter the elements : ";
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    cout<<"after doing the operation : ";
    for(int i = 0;i<n;i++){
        if(i%2==0) v[i]+=10;
        else v[i]*=2;
        cout<<v[i]<<" ";
    }
   
}
