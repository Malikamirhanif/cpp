# include<iostream>
# include<iomanip>
using namespace std;
int main()
{int i,j,k=25;
cout<<setw(k);
for(i=1;i<=5;i++)
{for(j=1;j<=i;j++)
{cout<<j<<setw(5);
}
k-=5;
cout<<"\n";
cout<<setw(k);
}
system("pause");
return 0;
}
