# include<iostream>
using namespace std;
char ch; int a,b,c,d,e;
int main()
{
cout<<"Enter S for square and T for triangle";
cin>>ch;
if(ch=='s')
{
cout<<"Enter side";
cin>>a;
b=a*a;
cout<<"Area of square is"<<b;
}
if(ch=='t')
{
cout<<"Enter base and height";
cin>>c>>d;
e=0.5*(c*d);
cout<<"Area of square is"<<e;
}
system ("pause");
return 0;
}
