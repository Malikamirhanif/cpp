# include<iostream>
using namespace std; 
void add (int x[],int y[],int z);

 int main()
{int a[7], b[8],c[5] ,size,i,j,k;
cout<<"Enter size of array\n";
cin>>size;
cout<<"Enter Elements in 1st array\n";
for(i=0;i<size;i++)
{cin>>a[i];
}
cout<<"Enter Elements in 2nd array\n";
for(j=0;j<size;j++)
{cin>>b[j];
}
cout<<"\n";
for(i=0;i<size;i++)
{cout<<a[i]<<"  ";
}
cout<<"\n";
for(j=0;j<size;j++)
{cout<<b[j]<<"  ";
}
cout<<"\n";
cout<<"Third Array is addition of first two\n";
add(a,b,size);
system ("pause");
return 0;
}
void add (int x[],int y[],int z)
{int w[0], k,l,m;
for(k=0;k<z;k++)
{cout<<x[k]+y[k]<<"  ";
}
}
