# include <iostream>
# include <iomanip>
using namespace std;
int main()
{int i,j,k,l;
for(i=1;i<=3;i++)
{for(j=1;j<=i;j++)
cout<<setw(2)<<i*j;
cout<<"\n";
}
for(k=2;k>=1;k--)
{for(l=1;l<=k;l++)
cout<<setw(2)<<k*l;
cout<<"\n";
}

system ("pause");
return 0;
}
