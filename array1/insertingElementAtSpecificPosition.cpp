#include <iostream>
using namespace std;
void main(){
    int arr[100] = {5,8,4,11,5};
    int pos, num, i;
    cout<<"Enter the position & number : ";
    cin>>pos>>num;
    for(i=4; i>=pos; i--)
    arr[i+1]=arr[i];
    arr[pos]=num;
    cout<<"new array";
    for(i=0; i<6; i=i++)
    cout<<arr[i];
}