#include<iostream>
using namespace std;
int main()
{
    int k,i,j;
    cin>>k;
    
    for(i=1;i<=k;i++)
    {
        //cout<<i<<"*"<<endl;
        if (i==1) {
            cout<<i<<endl;
        }
        else if(i>1)
        {
            for (j=1;j<=i;j++)
            {
                if(j==i)
                {
                    cout<<i;
                }
                else
                cout<<i<<"*";
                
            }
            cout<<endl;
        }
    }
    for(i=k;i>=1;i--)
    {
        //cout<<i<<"*"<<endl;
        if (i==1) {
            cout<<i<<endl;
        }
        else if(i>1)
        {
            for (j=1;j<=i;j++)
            {
                if(j==i)
                {
                    cout<<i;
                }
                else
                    cout<<i<<"*";
            }
            cout<<endl;
        }
    }
}
