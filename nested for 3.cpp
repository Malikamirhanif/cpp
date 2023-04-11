# include<iostream>
using namespace std;
int main()
{int i,j,k;
for(i=1;i<=5;i++)
{for(j=5;j<=5-i;j++)
cout<<" ";
for(k=1;k<=i;k++)
cout<<"*";
cout<<"\n";
}
system ("pause");
return 0;
}
