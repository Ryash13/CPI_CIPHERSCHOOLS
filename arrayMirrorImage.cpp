#include <iostream>
using namespace std;

bool mirrorInverse(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[arr[i]]!= i)
            return false;
    }
    return true;
}

int main() 
{
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    if(mirrorInverse(arr,size))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
	return 0;
}
