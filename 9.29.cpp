# include<iostream>
using namespace std;
int min (int ar[]);
int main()
{int a[8],i,b;
cout<<"Enter Elements in Array\n";
for(i=0;i<5;i++)
{cout<<"Element is\n";
cin>>a[i];
}
b=min(a);
cout<<"Minimum Value is \t"<<b;
system("pause");
return 0;
}
int min(int ar[])
{int j,k ,l;
l=ar[0]
;for(j=0;j<5;j++)
{if(ar[j]<l)
{l=ar[j];
}
}
return l;
}
