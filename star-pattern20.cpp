#include<iostream>
using namespace std;

int main()
{
	
    int i , j, k = 0, rows, x;
    cin >> rows;
    for ( i = 1; i <= rows; i++ )
    {
    	i < rows/2 + 2 ? k++ : k--;
    	x = 1;
        for( j = 1; j <= (rows + 1) / 2; j++ )
        if( j >= ( rows/2 + 2 ) - k )   
        {
            cout << x;
            x++;
        }
        else
        {
        	cout << " ";
        }
		cout << endl;
    }
}
