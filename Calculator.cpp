/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<math.h>

using namespace std;

int logarithm();
int trig();
int power();



int main()
{   
    int a;
    cout<<"Calculator-";
    cout<<"\n1. Logarithm";
    cout<<"\n2. Trigonometric fn";
    cout<<"\n3. Power";
    cout<<"\nEnter option-";
    cin>>a;
    
    switch(a)
    {
        case 1: logarithm();
    
        case 2: trig();
        
        case 3: power();
        
        //case default:cout<<"Invalid option";
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

int trig()
{
    float a,b,c,d,hyp,f;
    int e;
    cout<<"\nDo you have angle(1) or sides(2)-";
    cin>>e;
    if(e==1)
    {
        cout<<"Enter angle in degree";
        cin>>a;
        a=((22/7)*a)/180;
        b=sin(a);
        cout<<b;
    }
    else
    {
        cout<<"Enter base and perpendicular length";
        cin>>c>>d;
        hyp=sqrt(((c)*(c))+(d*d));
        f=d/hyp;
        cout<<"Sin value-"<<f;
    
        cout<<"cos value-"<<sqrt(1-(f*f));
        
    }
    
}

int power()
{
    float x,y;
    cout<<"Enter 2 nos";
    cin>>x>>y;
    cout<<pow(x,y);
    
    
}
