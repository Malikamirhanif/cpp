7# include<iostream>
# include<math.h>
using namespace std;
int main()
{int i,j=1,f=1,a;float sum=1,b,sum1=0;
cout<<"Enter limit\n";
cin>>a;
for(i=1;i<=a;i++)
{
f=1;
do
{
f=f*j;
sum=sum*f;
j++;
}
while(j<=i);
b=i/sum;
sum1=sum1+b;






}
cout<<"sum is\t"<<sum1;
system("pause");
return 0;
}
