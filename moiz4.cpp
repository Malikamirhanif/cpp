# include<iostream>
using namespace std;
int main()
{int i,j,k,a,p=0,q=0;
cout<<"Enter a prime number";
cin>>a;
for(i=2;i<=a;i++)
if(a%i==0)
{p++;
}
if(p==1)
cout<<"Prinme number"<<"\t"<<a<<"\n";
else 
{cout<<"Not prime";
}
for(j=1;j<a;j++)
for(k=2;k<=j;k++)
{if(j%k==0)
q++;
if(q==1)
cout<<"prime"<<"\t"<<j<<"\n";
}


system("pause");
return 0;
}
