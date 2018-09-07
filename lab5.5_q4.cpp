//include library
#include <iostream>
using namespace std;

	int main()
	{

	int n;
	cout << "Put a value n :" ;
	cin >> n;

//printing stars in rhombus shape
		
		for(int i =0; i<n; i++)
//printing space
			
		{
			int j =0;
			while(j < (n-1)-i)
			{
			cout<<" ";
			j++;
			}

//printing 5 stars in shape of rhombus

			for(j=0; j<n; j++)
			{
			cout << "*" ;
			}
			cout << endl;
		}

	cout<<endl;


	return 0;

	}
