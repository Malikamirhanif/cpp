# include<iostream>
# include<math.h>
using namespace std;
void btd (int a);
int main()
{int n;
cout<<"Enter Binary Number\n";
cin>>n;
 btd (n);
system("pause");
return 0;
}
void btd (int a)
{int n2,k,l,x2,x3,u=0,v,w,y,z,sum1=0;
n2=a;
for(k=0;a>=1;k++)
{x2=a%10;
a=a/10;
u++;
}
u=u-1;
for(k=u;k>=0;k--)
{x3=n2%10;
w=pow(2,k);
sum1=sum1+x3*w;
n2=n2/10;
}

cout<<"Decimal Number is\t"<<sum1;
}
