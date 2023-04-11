# include<iostream>
# include<math.h>
using namespace std;
void power (int x,int y);
int main()
{int a,b;
cout<<"Enter number\n";
cin>>a;
cout<<"Enetr number\n";
cin>>b;
power(a,b);
system ("pause");
return 0;
}
void power (int x,int y)
{int f=1,i;
for(i=1;i<=y;i++)
{f=f*x;
}
cout<<"Powre\t"<<f;
}
