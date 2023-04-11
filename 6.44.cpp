# include<iostream>
# include<iomanip>
using namespace std;
int main()
{int i,j,k,l,m=0,n=9,o;
for(i=1;i<=5;i++)
{if(i != 1)
{for(j=1;j<=m && m<=4;j++)
cout<<"   ";
}
for(j=1;j<=n;j++)
{cout<<"&"<<"  ";
}
m++;
n-=2;
cout<<"\n";

}
system ("pause");
return 0;
}
