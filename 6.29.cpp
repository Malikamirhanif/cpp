# include <iostream>
# include<math.h>
using namespace std ;
int main()
{int e=0,o=0,p=0,n,i,a,op=0;
cout<<"Enter Number Which When Entered Program Will Terminat\n ";
cin>>n;
do
{
p=0;
cout<<"Enter Value To check\n";
cin>>a;
if(a%2==0)
{e++;
}
if(!(a%2==0))
{o++;
}
for(i=2;i<=a;i++)
{if(a%i==0)
p++;}

if(p==1)
{
cout<<"Number is Prime\t"<<a<<"\n";
op++;}
}
while(a != n);
cout<<"Total Even\t"<<e<<"\n";
cout<<"Total Odd\t"<<o<<"\n";
 cout<<"Total Prime\t"<<op;

system ("pause");
return 0;
}
