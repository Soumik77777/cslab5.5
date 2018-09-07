//include library
#include <iostream>
using namespace std;

//printing stars in rhombus shape

	int main()
	
	{

	int n;

	cout << " Enter value of side :";
	cin >> n;


		for(int i =0; i<n; i++)

		{
//printing space
			int j =0;
			while(j < (n-1)-i)
			{
			cout<<" ";
			j++;
			}

//printing 5 stars in 1st and 5th row 
			
			if (i==0 || i==n-1)
			for (j=0; j<n-1; j++)
			{
			cout<<"*";
			}
		
//printing 2nd to 4th row

			else 
				{
				cout<<"*";
				for(j=0; j<n-2; j++)
					{
					cout<<" ";
					}
					cout<<"*";
				}
		
			cout<<endl;
		}

cout<<endl;

	return 0;
	}
