# include<iostream>
using namespace std;
void change (int ar[],int z);
int main()
{int a[8],size,c,d,i;
cout<<"Enter size of Array\n";
cin>>size;
cout<<"Enter Elements of Array\n";
for(i=0;i<size;i++)
{cin>>a[i];
}
change (a,size);
system ("pause");
return 0;
 } 
 void change (int ar[],int z)
 {int j;
 cout<<"The output according to requirements\n";
 for(j=0;j<z;j++)
 {if(ar[j]%5==0)
 {cout<<ar[j]/5<<" ";
 }
 else
 {cout<<ar[j]*2<<" ";
 }
 }
 }
