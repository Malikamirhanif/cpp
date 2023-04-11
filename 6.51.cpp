# include<iostream>
# include<iomanip>
using namespace std;
int main()
{int i,j,k=0;
for(i=1;i<=6;i++)

{k=0;
for(j=1;j<=i && k<=5;j++)
{cout<<k;
k++;}

cout<<"\n";
}
system("pause");
return 0;
}
