// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int sum1 = 0;
    int sum2 = 0;
    cout<<"enter the elements : ";
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0;i<n;i++){
        if(i%2==0) sum1+=v[i];
        else sum2+=v[i];
    }
    if(sum2>sum1) swap(sum1,sum2);
    cout<<"the difference is "<<sum1-sum2;
}