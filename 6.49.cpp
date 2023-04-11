# include<iostream>
# include<iomanip>
using namespace std;
int main()
{int i,j,k=7,l,m=-1,n,o=0,p=6;
for(i=1;i<=7;i++)
{
for(j=1;j<=k;j++)
{cout<<j;
}
if(i !=1)
{for(l=1;l<=m;l++)
{cout<<" ";
}
}
for(n=6-o;n>=1 ;n--)
{cout<<n;

}
n--;
k--;
m+=2;

p--;
cout<<"\n";
if(i==1) continue;
o++;

}
system ("pause");
return 0;
}
