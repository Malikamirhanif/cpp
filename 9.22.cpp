# include<iostream>
# include<math.h>
# include <iomanip>
using namespace std;
int d (int a);
int main()
{int n,s;
cout<<"Enter Number\n";
cin>>n;
s=d ( n);
cout<<"Number of Digits are\t"<<s;
system ("pause");
return 0;
}
int d (int a)
{int b,c=0,i;
for(i=1;a>=1;i++)
{
b=a%10;
a=a/10;
c++;}
return c;


}
