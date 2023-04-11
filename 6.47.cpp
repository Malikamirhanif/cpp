# include<iostream>
# include<iomanip>
using namespace std;
int main()
{int i,j; char ch='A';
for(i=1;i<=5;i++)
{

ch='A';
for(j=1 ;j<=i;j++)
{cout<<ch;

ch++;}
cout<<"\n";
}
system ("pause");
return 0;
}
