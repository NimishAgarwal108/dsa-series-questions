#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=i;
    while(j<2*i){
        cout<<j<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
}