# include<iostream>
using namespace std;
int main()
{int n,i,j,a[10],size,d=0,b=0,c=0,f=0;
cout<<"Enter size of Array\n";
cin>>size;
cout<<"Enter Elements in Array\n";
for(i=0;i<size;i++)
cin>>a[i];
for(i=0;i<size;i++)
{a[i];
if(a[i]>80)
{d++;
}
else if(a[i]>60)
{b++;
}
 else if(a[i]>40)
{c++;
}
 else if(a[i]<40)
{f++;
}
}
cout<<d<<"Students Got\t"<<'A'<<"\t Grade\n";
cout<<b<<"Students Got \t"<<'B'<<"\t Grade\n";
cout<<c<<"Students Got\t"<<'C'<<"\t Grade\n";
cout<<f<<"Students Got\t"<<'F'<<"\t Grade\n";
system ("pause");
return 0;
}
