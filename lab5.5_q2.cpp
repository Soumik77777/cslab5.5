//*****
//*   *
//*   *
//*   *
//*****

//including library
#include<iostream>
using namespace std;

int main ()
	{
	int n;

	cout << "Enter value of side of hollow square :";
	cin >> n;

	for (int i=0; i<n; i++)
		{
		if ( i==0  ||  i==n-1 )
			{
			for (int j=0; j<n; j++)
				{
				cout << "*";
				}
			cout << endl;
			}

		else
			{
//print star
			cout << "*";
//print spaces
			for (int j=1; j<n-1; j++)
				{
				cout << " ";
				}
//print star
			cout << "*";
			cout << endl;
			
			}
		}
	return 0;
	}
