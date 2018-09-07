//include library
#include <iostream>
using namespace std;

	int main()

	{

		int n;

		cout << "Put base value of right angle triangle :";
		cin >> n;

//printing for 5 rows
	
		for(int i=0;i<n;i++)

		{

//printing i+1 stars
			for(int j=0; j<i+1;j++)

			{
			cout<<"*";
			}

		cout<<endl;

		}


	return 0;
	}
