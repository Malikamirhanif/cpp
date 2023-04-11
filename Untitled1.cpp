# include<iostream>
using namespace std;
int main()
{int ar[20],i,j,min,loc,size,temp;
cout<<"Enter size of Array\n";
cin>>size;
cout<<"\n\tEnter values\n";
for(i=0;i<size;i++)
{cin>>ar[i];
}
for(i=0;i<(size-1);i++)
{min=ar[i];
loc=i;
for(j=i+1;j<size;j++)
{if(ar[j]<min)
{
min=ar[j];
loc=j;
}}
temp=ar[i];
ar[i]=ar[loc];
ar[loc]=temp;
}
cout<<"\n\tvalues sorted\n";
for(i=0;i<size;i++)
{cout<<ar[i]<<"\t";
}
system("pause");
return 0;
}
