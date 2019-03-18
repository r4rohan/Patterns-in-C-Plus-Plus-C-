#include<iostream>
using namespace std;

int main()
{
	
    int i , j, rows;
    cin >> rows;
    for ( i = 1; i <= rows; i++ )
    {
        for( j = 1; j <= rows; j++ )
        if( j == i || j == ( rows + 1 ) - i )   
        {
        	if( i == j)
        		cout << "\\";
        	else
        		cout << "/";
        	
		}
        else
        {
        	cout << "*";
		}
		cout << endl;
    }
}
