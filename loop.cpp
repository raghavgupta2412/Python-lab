#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a ,b,n,t;
    cin>>a>>b;

    for(a;a<=b;a++)
    {
        if(1<=a<=9)
        {
        if(a==1)
        {
            cout<<"one"<<endl;
        }

        if(a==2)
        {
            cout<<"two"<<endl;
        }

        if(a==3)
        {
            cout<<"three"<<endl;
        }
        
        if(a==4)
        {
            cout<<"four"<<endl;
        }
        
        if(a==5)
        {
            cout<<"five"<<endl;
        }
        
        if(a==6)
        {
            cout<<"six"<<endl;
        }
        
        if(a==7)
        {
            cout<<"seven"<<endl;
        }
        
        if(a==8)
        {
            cout<<"eight"<<endl;
        }
        
        if(a==9)
        {
            cout<<"nine"<<endl;
        }
        }
        if(a>9)
        {
            if(a%2==0)
            {
            cout<<"even"<<endl;
            }else{
            cout<<"odd"<<endl;
            }
        }
    }
}