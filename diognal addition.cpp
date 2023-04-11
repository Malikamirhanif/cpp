# include<iostream>
using namespace std;
int main()
{int i,j,sum,a[6][8],x,y;
cout<<"Enter # of Rows \n";
cin>>x;
cout<<"Enter # of Columns \n";
cin>>y;
cout<<"Enter Elements in Array\n";
for(i=0;i<x;i++)
{for(j=0;j<y;j++)
{cin>>a[i][j];
}
}
for(i=0;i<x;i++)
{for(j=0;j<y;j++)
{cout<<"\t"<<a[i][j];
}
cout<<"\n";
}
for(j=0;j<x;j++)
{for(i=j;i<=j;i++)
{a[i][j];
sum=sum+a[i][j];
}
}
cout<<"Diognal\n"<<sum;
system("pause");
return 0;


}
