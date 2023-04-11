# include <iostream>
# include <iomanip>
using namespace std;
int main()
{int i=1,j=1,k,l=1,m=14,n=0;
for(i=1;i<=5;i++)
{for(j=j+n;j<=i;j++)
cout<<"&";
for(k=2;k<=m;k+=2)
cout<<setw(m);
for(l=l+n;l<=i;l++)
cout<<"&";
cout<<"\n";
n++;
m-=2;}
system("pause");
return 0;
}
