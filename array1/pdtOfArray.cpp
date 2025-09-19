#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int pdt=1;
    for(int i=0; i<=n-1; i++){
        pdt=pdt*arr[i];
    }
    cout<<pdt;
}