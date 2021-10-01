#include<iostream>
#include<math.h>

using namespace std;

float logarithm();
float power();

int main()
{   
    int a,b=1;
   
  do{
    cout<<"Hello I am a Calculator-";
    cout<<"\n1. Logarithm";
    cout<<"\n2. Power";
    cout<<"\nEnter option-";
    cin>>a;
    
    switch(a)
    {
        case 1:
        {	
	cout<<logarithm();
	break;
        }    
        case 2:
       {
	cout<<power();
	break;
        }        
        default:
       {
	cout<<"Invalid option";
	break;
        }
    }
  cout<<"\n\nWant to continue?(1/0)";
  cin>>b;
  cout<<"\n";
  }while(b==1);
   return 0;
}

float logarithm()
{
    int a,b;
    float c;
    cout<<"\nEnter base and argument-";
    cin>>a>>b;
    c=(log(b))/(log(a));
    return c;
}

float power()
{
    int x,y;
    float z;
    cout<<"Enter base and power-";
    cin>>x>>y;
    z=pow(x,y);
    return z;
}
