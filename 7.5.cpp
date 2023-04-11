# include<iostream>
using namespace std;
int main()
{int i,j,size,m,a[10],c;
cout<<"Enter size of Array\n";
cin>>size;
cout<<"Enter Elements in Array\n";
for(i=0;i<size-1;i++)
{cin>>a[i];
}
for(i=0;i<(size-1);i++)
{m=a[i];c=1;
for(j=1;j<size;j++)
{if(m==a[j])
{c++;
}
}
cout<<m<<"\tis\t"<<c<<"\ttimes\t\n";
}
system("pause");
return 0;
}
