#include <iostream>
using namespace std;
    int main (){
        int n;
        cout<<"No of rows : ";
        cin>>n;
        int m;
        cout<<"No of columns : ";
        cin>>m;
        for(int i=1; i<=n; i++){
            for(int i=1; i<=m; i++){
                cout<<"*";
            }
            cout<<endl;
        }
    }