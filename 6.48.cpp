# include<iostream>
# include<iomanip>
using namespace std;
int main()
{int i,j,k=1;
for(i=1;i<=7;i++)
{for(j=1;j<=i && k<=55;j++,k+=2)
{cout<<k<<" ";
}

cout<<"\n";}
system ("pause");
return 0;
}
