# include<iostream>
using namespace std;
int main()
{int i,j,n,den=1,sum=0;
cout<<"Enter limit\n";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
den=den*j;// with the each iteration of loop value of den will initialize with 1
sum=sum+den;
den=1;
}
cout<<"Sum is\t"<<sum;
system ("pause");
return 0;
}
