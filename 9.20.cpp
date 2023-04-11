# include<iostream>
# include<math.h>
using namespace std;
void se(int x);
int x,i,f=1,j,a,sum1=1;float sum2=2.0,e;
int main()
{cout<<"Enter a number\n";
cin>>a;
se(a);
system("pause");
return 0;
}
void se (int x)
{for(i=2;i<=16;i++)
{f=1;
for(j=i;j>=1;j--)
{f=f*j;}
sum1=sum1+f;

if(i%2==0)
{

e=-1* (pow(x,i))/sum1;}
else
{e=pow(x,i)/sum1;
}
sum2=sum2+e;

}
cout<<"sum is\t"<<sum2;

}
