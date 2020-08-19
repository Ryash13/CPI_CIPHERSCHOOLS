#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	int rem , res = 0;
	cin>>num;
	int cpy = num;
	while(cpy!=0)
	{
		rem = cpy % 10;
		res = res + rem*rem*rem;
		cpy = cpy/10;
	}
	if(res == num)
		cout<<"Yes"<<"\n";
	else
		cout<<"No\n"<<endl;
	return 0;
}
