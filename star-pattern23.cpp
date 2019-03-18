#include<iostream>
using namespace std;

int main()
{
	
    int i , j, n;
    char k;
    cin >> n;
    for ( i = 1; i <= n; i++ )
    {
    	k = 49;
        for( j = 1; j <= 2 * n - 1; j++ )
        if( j >= ( n + 1 ) - i && j <= (n  - 1) + i )   
		{
			cout << k;
			k++;
			if( j == n)
			{
				k = 65;
			}
		}
        else
        {
        	cout << " ";
		}
		cout << endl;
    }
}
