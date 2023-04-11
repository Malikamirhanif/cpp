# include<iostream>
using namespace std;
int main()
{int i,s,j,p=1;
for(i=1;i<=5;i++)
{for(s=5;s>=p;s--)
cout<<" ";
for(j=1;j<=i;j++)
cout<<"*";
cout<<"\n";
p++;
}
system("pause");
return 0;
}
