# include<iostream>
using namespace std;
int main()
{int i,n,a,max,min,c=1,b,sum=0;
cout<<"Enter no of values you want yo enter";
cin>>n;
cout<<"Enter value";
cin>>a;
max=a;
min=a;
sum=sum+a;
for(i=1;i<n;i++)
{cout<<"Enter value";
cin>>b;
sum=sum+b;
if(b>max)
max=b;
if(b<min)
min=b;
c++;
}
cout<<"Avg"<<sum/c<<"\n";
cout<<"Maximum"<<max<<"\n";
cout<<"Minimum"<<min<<"\n";
system("pause");
return 0;
}
