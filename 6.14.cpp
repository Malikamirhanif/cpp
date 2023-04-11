# include<iostream>
using namespace std;
int main()
{int f=2,sum=1,sum1=1,i,c=1,n,m,j;

cout<<"Enter a number for fictirial\n";
cin>>f;
for(i=1;i<=f;i++)
{sum=sum*i;
}
cout<<"fact is"<<"\t"<<sum;
cout<<"Enter 1 for again find factorial 0 to terminate";
cin>>n;
if(n==1)
{cout<<"Enter a number";
cin>>m;
for(j=1;j<=m;j++)
{
sum1=sum1*j;}
cout<<"fact is"<<"\t"<<sum1;}

else if(n==0)
 {
 
cout<<"End of program";}
system ("pause");
return 0;
}
