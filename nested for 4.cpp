# include<iostream>
using namespace std;
int main()
{int i,j,k,l,m=4,n=1,p=1,q=4;
for(i=1;i<=5;i++)
{for(j=1;j<=m;j++)
cout<<" ";
for(k=1;k<=i;k++)
cout<<p;
for(l=1;l<=q;l++)
cout<<" ";
cout<<"\n";
q--;
m--;
n++;
p++;
}
system("pause");
return 0;
}
