#include<iostream>
using namespace std;

int main()
{
	
    int i , j, k, rows;
    cin >> rows;
    for ( i = 1; i <= rows; i++ )
    {
    	k = i;
        for( j = 1; j <= ( 2 * rows ) - 1; j++ )
        if( j >= ( rows + 1 ) - i && j <= ( rows - 1 ) + i)   
        {
            cout << k;
            j < rows ? k++ : k--;
        }
        else
        {
        	cout << " ";
        }
		cout << endl;
    }
}
