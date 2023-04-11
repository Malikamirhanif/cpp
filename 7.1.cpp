# include<iostream>
using namespace std;
int main()
{int i,j,a[10],p=0;
cout<<"Enter Elements in Array\n";
for(j=0;j<10;j++)
{cin>>a[j];
}
for(j=0;j<10;j++)
{p=0;
a[j];
for(i=2;i<=a[j];i++)
{if(a[j]%i==0)
p++;}
if(p==1)
{cout<<"Prime\t"<<a[j]<<"\n";
}

}

system("pause");
return 0;
}
