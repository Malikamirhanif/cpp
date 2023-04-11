# include <iostream>
using namespace std;
int main()
{int p=0,a,i,k,j,q=0;
cout<<"Enter a prime number"<<"\n";
cin>>a;
for(i=2;i<=a;i++)
{if(a%i==0)
p++;
}
if(p==1)
{cout<<"Number is prime"<<"\t"<<a<<"\n";}
else
{cout<<"Not a prime number";
}

for(j=2;j<a;j++)
{q=0;
for(k=2;k<=j;k++)

if(j%k==0)
q++;
{if(q==1)
cout<<"prime"<<"\t"<<j<<"\n";
}
}

system("pause");
return 0;
}
