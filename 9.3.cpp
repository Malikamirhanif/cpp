# include<iostream>
# include<math.h>
using namespace std;
void count (int ar[],int b);
int main()
{int a[5],size;
cout<<"Enter Size\n";
cin>>size;
count (a,size);
system ("pause");
return 0;


}


void count (int ar[],int b)
{int i,e=0,o=0,m=0;
for(i=0;i<b;i++)
{cout<<"Enter Number\n";
cin>>ar[i];
}
for( i=0;i<b;i++)
{
if(ar[i] == 0)
{m++;
}
else if(ar[i]%2 == 0)
{e++;
}
else if(ar[i]%2 !=0)
{o++;
}
}
cout<<"\n Even Numbers Are\t"<<e;
cout<<"\n Odd Numbers Are\t"<<o;
cout<<"\n Zero Numbers Are\t"<<m;





}
