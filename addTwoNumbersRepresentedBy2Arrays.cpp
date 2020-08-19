#include <bits/stdc++.h> 
using namespace std; 
  
int calSumUtil(int a[], int b[], int n, int m) 
{  
    int sum[n]; 
    int i = n - 1, j = m - 1, k = n - 1; 
    int carry = 0, s = 0; 
    while (j >= 0) 
	{
    	
        s = a[i] + b[j] + carry; 
        sum[k] = (s % 10);  
        carry = s / 10; 
  
        k--; 
        i--; 
        j--; 
    } 
    while (i >= 0) 
	{ 
        s = a[i] + carry; 
        sum[k] = (s % 10); 
        carry = s / 10; 
  
        i--; 
        k--; 
    } 
    int ans = 0; 
    if (carry) 
        ans = 10; 
    for (int i = 0; i <= n - 1; i++) 
	{ 
        ans += sum[i]; 
        ans *= 10; 
    } 
  
    return ans / 10; 
} 
  

int calSum(int a[], int b[], int n, int m) 
{ 
    if (n >= m) 
        return calSumUtil(a, b, n, m); 
  
    else
        return calSumUtil(b, a, m, n); 
} 


int main() 
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int size1,size2;
		cin>>size1>>size2;
		int arr1[size1],arr2[size2];
		for(int i=0;i<size1;i++)
		{
			cin>>arr1[i];
		}
		for(int j=0;j<size2;j++)
		{
			cin>>arr2[j];
		}
		cout<<calSum(arr1,arr2,size1,size2)<<endl; 
	}
    return 0; 
}
