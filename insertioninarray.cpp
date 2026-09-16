#include<iostream>
using namespace std;
int main()
{
    int arr[100],n;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter"<<n<<"values";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"you had entered these values";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<"\n enter the new value";
    int val;
    cin>>val;
    arr[n]=val;
    cout<<"after insertion of new value array is";
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

    

}