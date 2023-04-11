# include <iostream>
# include <iomanip>
using namespace std;
int main()
{int i,j,k,m=4;
for(i=1;i<=5;i++)
{for(j=1;j<=m;j++)
cout<<" ";
for(k=1;k<=i;k++)
cout<<setw(2)<<i;
cout<<"\n";
m--;
}
system("pause");
return 0;
}
