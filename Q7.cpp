// If an array arr contains n elements, then check if the given array is a palindrome or not
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
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    bool flag = true;
    for(int i = 0,j=n-1;i<j;i++,j--){
        if(v[i]!=v[j]){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"the given array is a palindrome";
    else cout<<"the given array is not a palindrome";
}