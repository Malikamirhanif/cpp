# include<iostream>
using namespace std;
int main()
{int s,e,i,j,p=0;
cout<<"Enter Starting Number\n";
cin>>s;
cout<<"Enter Ending Number\n";
cin>>e;
for(i=e;i>=s;i--)
{p=0;
for(j=2;j<=e;j++)
if(i%j==0)
p++;
if(p==1 && i%10==7)
cout<<i<<"\t";
}
system("pause");
return 0;
}
