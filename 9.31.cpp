# include<iostream>
using namespace std;
void rev (float ar[] );
int main()
{int i,j,k;float a[9];
cout<<"Enter float number in array\n";
for(i=0;i<10;i++)
{cin>>a[i];
}
cout<<"Origional Order of array\n";
for(i=0;i<10;i++)
{cout<<a[i]<<"  ";
}
cout<<"\n";
rev(a);
system("pause");
return 0;

}
void rev (float ar[])
{int j;
for(j=9;j>=0;j--)
{cout<<ar[j]<<"  ";
}
}
