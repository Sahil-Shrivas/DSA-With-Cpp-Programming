#include <iostream>
using namespace std;
int main() 
{
    int x;
    cout<<"Enter the  value of sum : ";
    cin>>x;

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int A[n];
    cout<<"Enter elements for the array"<<endl;
    for(int i=0;i<n;i++)cin>>A[i];

    int count = 0;
        for(int i = 0; i < n; i++){
          for(int j = i + 1; j < n; j++){
              for(int k = j + 1; k < n; k++){
                    if(A[i] + A[j] + A[k] == x){
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;
        return 0;
}