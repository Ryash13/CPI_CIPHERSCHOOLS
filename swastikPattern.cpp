#include <bits/stdc++.h> 
using namespace std; 

// full solid rhombus
void printSolidRhombus(int r) 
{ 
	int i, j; 
	for (i=1; i<=r; i++) 
	{ 
		for (j=1; j<=r - i; j++) 
			cout << " ";  
		for (j=1; j<=r; j++) 
			cout << "*"; 
		cout << "\n"; 
	} 
} 

// Hollow Rhombus
void printHollowRhombus(int r) 
{ 
	int i, j; 
	for (i=1; i<=r; i++) 
	{ 
		for (j=1; j<=r - i; j++) 
			cout << " ";  
		if (i==1 || i==r) 
			for (j=1; j<=r; j++) 
				cout << "*";
		else
			for (j=1; j<=r; j++) 
				if (j==1 || j==r) 
					cout << "*"; 
				else
					cout << " "; 
		cout << "\n"; 
	} 
} 

int main() 
{ 
	int r;
	cin>>r; 
	system("cls");
	printSolidRhombus(r);
  cout<<endl<<endl;;
  printHollowRhombus(r);
	
	return 0; 
} 
