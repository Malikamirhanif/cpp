# include<iostream>
using namespace std;
int main()
{int n,g1=0,g2=0,temp=0;
do
{cout<<"Enter a number";
cin>>n;
if(g2<n)
{g1=n;
temp=g1;
g1=g2;
g2=temp;
}
}
while(n != 0);
cout<<"The second heihest is\t"<<g1;
system("pause");
return 0;
}
