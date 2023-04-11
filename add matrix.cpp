# include <iostream>
# include <iomanip>
using namespace std;
int main()
{int i,j,aa[4][5],ab[6][4],c[7][4];
cout<<"Enter elements for 1st Matrix\n";
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{cin>>aa[i][j];
}
cout<<"\n";
cout<<"Enter elements for 2nd Matrix\n";
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{cin>>ab[i][j];
}
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{c[i][j]=aa[i][j]+ab[i][j];
}
cout<<"Elements of 1st Matrix\n";
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{cout<<aa[i][j]<<"\t";
}
cout<<"Elements of  2nd Matrix\n";
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{cout<<ab[i][j]<<"\t";
}
cout<<"+";
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{cout<<c[i][j]<<"\t";
}
system("pause");
return 0;

}
