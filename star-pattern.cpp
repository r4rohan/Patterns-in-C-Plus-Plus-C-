#include<iostream>
using namespace std;

int main()
{
	// i is for rows and j is for colums
    int i , j;
    for ( i = 1; i <= 5; i++ )
    {
        for( j = 1; j <= 5; j++ )
        // in order to print it i must be great or equal to j
        if( j <= i)
        {
            cout << "*";
        }
        else
        {
        	cout << " ";
		}
		cout << endl;
    }
}
