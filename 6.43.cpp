# include<iostream>
# include<iomanip>
using namespace std;
int main()
{int i,j,k,m=9,n=0,l;
for(i=1;i<=5;i++)
{
if(i != 1)
{for(k=1;k<=n;k++)
cout<<".";
}
for(j=1;j<=m;j++)
{cout<<"B";
}

m-=2;
n++;
cout<<"\n";
}
system("pause");
return 0;
}
