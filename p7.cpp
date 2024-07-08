#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=2;
while(i<n){
    if(n%i==0){
        cout<<"n is not a prime number in case of "<<i<<endl;
    }
    else {
        cout<<"n is a prime number in case of "<<i<<endl;
    }
    i=i+1;
    
}
}