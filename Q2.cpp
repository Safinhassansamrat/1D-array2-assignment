// WAP to find the largest three elements in the array.
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
  int max = 0;
  int smax = 0;
  int tmax = 0;
  for(int i = 0;i<n;i++){
    if(v[i]>max){
        tmax = smax;
        smax = max;
        max = v[i];
    }
     else if(v[i]>smax){
        tmax = smax;
        smax = v[i];
    }
     else if(v[i]>tmax){
        tmax = v[i];
    }
  }
  cout<<max<<" "<<smax<<" "<<tmax;
}
