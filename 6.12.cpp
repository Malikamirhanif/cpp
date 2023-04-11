# include <iostream>
using namespace std;
int main()
{int b,avg,sum=0,i=0;
do
{cout<<"Enter a value";
cin>>b;
sum=sum+b;
i++;
}
while(b != 9999);
cout<<"sum is"<<"\t"<<sum<<"\n";
cout<<"counter is"<<"\t"<<i<<"\n";
avg=sum/i;
cout<<"Average is"<<"\t"<<avg;
system ("pause");
return 0;
}
