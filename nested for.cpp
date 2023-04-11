# include <iostream>
using namespace std;
int main()
{int i,j,n,p;
cout<<"enter no";
cin>>n;
for(i=1;i<=5;i++)
for(j=5;j>=j-i;j--)
{if(i*j==n)
cout<<i<<"*"<<j<<"\t";
}
system("pause");
return 0;
}
