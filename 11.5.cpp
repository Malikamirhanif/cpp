# include<iostream>
using namespace std;
int main()
{int *p,i,sum=0,n,m,c=0,avg;
cout<<"Enter Number of Students\n";
cin>>n;
p=new int [n];
cout<<"Enter Data of st\n";
for(i=0;i<n;i++)
{cin>>*p++;
sum=sum+*p;
}
avg=sum/n;
cout<<"Average is\t"<<avg;
delete []p;
system ("pause");
return 0;
}
