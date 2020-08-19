#include<bits/stdc++.h>
using namespace std;

int convertBtoD(long long);

int main()
{
    long long n;
    cin >> n;
    cout<<convertBtoD(n)<<endl;
    return 0;
}

int convertBtoD(long long n)
{
    int dNum = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        dNum += remainder*pow(2,i);
        ++i;
    }
    return dNum;
}
