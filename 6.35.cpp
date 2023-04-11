# include<iostream>
using namespace std;
int main()
{int i,j,p=0,rev,digit,num;
for(i=100;i<=500;i++)
{p=0;
num=i;
for(j=2;j<=i;j++)
if(i%j==0)
p++;
if(p==1)
{do
{digit=i/10;
rev=(rev*10)+digit;
num=num/10;}
while(num != 0);
cout<<i<<"\t";

}
}
system("pause");
return 0;
}

