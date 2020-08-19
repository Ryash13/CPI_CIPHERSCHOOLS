#include <bits/stdc++.h> 
using namespace std; 
  
int equilibrium(int arr[], int n) 
{ 
    int ls, rs; 
    int i , j;
    for (i = 0; i < n; ++i)  
    {      
  		ls = 0;  
        for (j = 0; j < i; j++) 
            ls += arr[j]; 
  
        rs = 0;  
        for (j = i + 1; j < n; j++) 
            rs += arr[j]; 
  
        if (ls == rs) 
            return i; 
    } 
    return -1; 
} 
  
int main() 
{ 
    int tc;
    cin>>tc;
    while(tc--)
    {
    	int size;
    	cin>>size;
    	int arr[size];
    	for(int i=0;i<size;i++)
    	{
    		cin>>arr[i];
		}
		cout<<equilibrium(arr,size);
	}
    return 0; 
}
