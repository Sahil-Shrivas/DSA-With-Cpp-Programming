#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of Array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x=0;
    bool flag=false;
    for(int i=0; i<n; i++){
        if(arr[i]!=x){
            cout<<x<<endl;
            flag = true;
            break;
        }
        else x++;
    }
    if(flag=false)
    cout<<x<<endl;
    return 0;
}