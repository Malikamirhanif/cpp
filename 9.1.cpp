# include<iostream>
using namespace std;
int main()
{int a,b,c,d,f,j,k;
cout<<"Enter A Number\n";
cin>>a;
c=a;
d=a;
int i,e=0;
for(i=0;a!=0;i++)
{
b=a%2;
a=a/2;
e++;
}
int ar[e]={0};
for(k=0;c!=0;k++)
{
f=c%2;
c=c/2;
ar[k]=f;
}
cout<<"\t\nBinary of Number is\n";
for(j=e-1;j>=0;j--)
{cout<<ar[j]<<"\t";
}
system("pause");
return 0;
}
