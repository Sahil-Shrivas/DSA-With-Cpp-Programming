// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="appleandmango";
    string t="mangoandapple";
    //bool flag=false;
    sort(s.begin(), s.end());
    cout<<s;
    cout<<endl;
    sort(t.begin(), t.end());
    cout<<t;
    cout<<endl;
        if(s==t){
            cout<<true;
        }
        else
        cout<<false;
}ṇ