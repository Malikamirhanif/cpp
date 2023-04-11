# include<iostream>
using namespace std;
int main()
{int i,j,a[8];float n[8],avg,sum=0.0;
cout<<"Enter Numbers\n";
for(i=0;i<10;i++)
{cin>>n[i];
sum=sum+n[i];

}
avg=sum/10;
cout<<"Average is\t"<<avg<<"\n";
for(i=0;i<10;i++)
{if(n[i]>avg)
{cout<<"Greater no is\t"<<n[i]<<"\n";
}
}
system ("pause");
return 0;


}
