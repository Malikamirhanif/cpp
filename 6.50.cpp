# include<iostream>
# include<iomanip>
using namespace std;
int main()
{
int i,j,k,l=20,m=1,o;
for(i=1;i<=10;i++)
{for(j=1;j<=l;j++)
{cout<<" ";
}
{
cout<<"&";
}
if(i !=1)
{for(k=1;k<=m && m<=15;k++)
cout<<" ";

cout<<"&";}
if(i==10)
{for(o=1;o<=19;o++)
{cout<<" "<<"&";
}
	
	
}
l-=2;
m+=2;
cout<<"\n";

}
system("pause");
return 0;
}
