#include<iostream>
using namespace std;

int main()
{
	
    int i , j, n;
    char k;
    cin >> n;
    for ( i = 1; i <= n; i++ )
    {
    	k = 'A';
        for( j = 1; j <= 2 * n; j++ )
        if( j >= ( n + 1 ) - i && j <= n + i )   
		{
			if ( j == ( n + 1 ))
			{
				k = '1';
        	}
			cout << k;	
        	k++;
		}
        else
        {
        	cout << " ";
		}
		cout << endl;
    }
}
