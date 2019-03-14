#include<iostream>
using namespace std;

int main()
{
	// i is for rows and j is for columns and k for toggle
    int i , j;
	char k;
    int n; //for entering no of rows
    cin >> n;
    for ( i = 1; i <= n; i++ )
    {
    	k = 'A';
        for( j = 1; j <= 2 * n - 1; j++ )
        if( j >= (n + 1) - i  && j <= (n - 1) + i)   
        {
            cout << k;   
        }
        else
        {
        	cout << " ";
		}
		cout << endl;
    }
}
