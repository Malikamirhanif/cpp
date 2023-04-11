# include<iostream>
# include<math.h>
# include<iomanip>
using namespace std;
int max (int ar[]);
int main()
{int a[8],i,b;
cout<<"Enter Elements in An Array\n";
for(i=0;i<5;i++)
{cout<<"Element is\n";
cin>>a[i];
}
b=max(a);
cout<<"Maximum Number is\t"<<b;
system ("pause");
return 0;
}
int max (int ar[])
{int j,k,l;
l=ar[0];
for(j=0;j<5;j++)
{if(ar[j]>l)
{l=ar[j];
}

}
return l;
}
