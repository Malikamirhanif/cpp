# include<iostream>
using namespace std;
int main()
{int i,num[10],sq[10],cb[10],sum[10],total=0;
for(i=0;1<10;i++)
{num[i]=i;
sq[i]=i*i;
cb[i]=i*i*i;
sum[i]=num[i]+sq[i]+cb[i];
}
cout<<"Number\t";
for(i=0;i<10;i++)
{cout<<num[i];
}
cout<<"Square\t";
for(i=0;i<10;i++)
{cout<<sq[i];
}
cout<<"Cube\t";
for(i=0;i<10;i++)
{cout<<cb[i];
}
cout<<"Sums\t";
for(i=0;i<10;i++)
{cout<<sum[i];
total=total+sum[i];
}
cout<<"\n";
cout<<"Grand Sum is"<<total;

system ("pause");
return 0;}

