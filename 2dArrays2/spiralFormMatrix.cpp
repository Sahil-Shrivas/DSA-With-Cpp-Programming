#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the No. of Rows in matrix : ";
    cin>>m;

    int n;
    cout<<"Enter the No. of Col. in matrix : ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter the element of matrix : ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //spiral
    int minr=0, minc=0;
    int maxr=m-1, maxc=n-1;
    while(minr<=maxr && minc<=maxc)
    {

        //right 
        for(int j=minc; j<=maxc; j++){
            cout<<arr[minr][j]<<" ";
            }
        minr++;
        if(minr>maxr || minc>maxc)
        break;


        //down 
        for(int i=minr; i<=maxr; i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc)
        break;


        //left 
        for(int j=maxc; j>=minc; j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc)
        break;


        //up 
        for(int i=maxr; i>=minr; i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}