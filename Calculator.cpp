#include<iostream>
#include<math.h>

using namespace std;

int logarithm();
int power();

int main()
{   
    int a;
    cout<<"Calculator-";
    cout<<"\n1. Logarithm";
    cout<<"\n2. Power";
    cout<<"\nEnter option-";
    cin>>a;
    
    switch(a)
    {
        case 1:
        {	
	logarithm();
	break;
        }    
        case 2:
       {
	power();
	break;
        }        
        default:
       {
	cout<<"Invalid option";
	break;
        }
    }
    return 0;
}

int logarithm()
{
    int a,b;
    float c;
    cout<<"\nEnter base and argument-";
    cin>>a>>b;
    c=(log(b))/(log(a));
    cout<<c;
}

int power()
{
    float x,y;
    cout<<"Enter 2 nos";
    cin>>x>>y;
    cout<<pow(x,y);
}
