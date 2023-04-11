# include<iostream>
using namespace std;
int main()
{int h,m,a,b,t;
cout<<"Enter time in military fomat\n";
cout<<"Enter hours";
cin>>h;
cout<<"Enter minutes";
cin>>m;
if(h>12)
{a=h%12;
t=a;
cout<<"time in standered format"<<t<<":"<<m;
}
else
{cout<<"time in standerd format"<<h<<":"<<m;
}
system("pause");
return 0;
}
