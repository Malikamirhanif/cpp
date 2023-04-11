# include <iostream>
using namespace std;
int main()
{int i,j,a[5][8],sum=0,sum1=0,sum2=0,x,y,k;
cout<<"Enter # of rows\n";
cin>>x;
cout<<"Enter # of columns\n";
cin>>y;
cout<<"Elements in Array\n";
for(i=0;i<x;i++)
{for(j=0;j<y;j++)
{
cin>>a[i][j];
}}
for(i=0;i<x;i++)
{for(j=0;j<y;j++)
{
cout<<a[i][j];
sum=sum+a[i][j];
cout<<"\t";
}
cout<<sum<<"\t";
sum=0;
cout<<"\n\n\n";


}
for(i=0;i<y;i++)
{for(j=0;j<x;j++)
{
a[j][i];
sum1=sum1+a[j][i];
}
cout<<sum1<<"\t";

sum1=0;
}
for(i=0;i<x;i++)
{for(j=i;j<=i;j++)
{a[i][j];
sum2=sum2+a[i][j];
}

}

cout<<"\nDiognal sum is\t"<<sum2;




system("pause");
return 0;
}
