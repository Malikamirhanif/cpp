# include<iostream>
# include<iomanip>
using namespace std;
int main()
{int i,j,k,l,m=7,n=1,o,p,q=4,r,s=7;
for(i=1;i<=5;i++)
{for(j=1;j<=m;j++)
{cout<<" ";
}
for(k=1;k<=n;k++)
{cout<<"*";
}
m--;
n+=2;
cout<<"\n";
}
for(o=1;o<=4;o++)
{for(p=1;p<=q && q<=11;p++)
{cout<<" ";
}
for(r=1;r<=s && s>=1;r++)
{cout<<"*";
}
q++;
s-=2;
cout<<"\n";
}
system ("pause");
return 0;
}
