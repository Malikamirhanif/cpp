# include<iostream>
# include<iomanip>
using namespace std;
int main()
{int i,j,l,m,n,k=0,o=-1;
for(i=1;i<=6;i++)
{for(j=1;j<=5-k;j++)
{cout<<"#"<<" ";
}
cout<<"*"<<" ";
if(i!=1)
{for(l=1;l<=o && o<=9;l++)
{cout<<"#"<<" ";
}
}
if(i!=1)
{cout<<"*"<<" ";
}
for(m=1;m<=5-k;m++)
{cout<<"#"<<" ";
}
k++;
o+=2;
cout<<"\n";
}
system("pause");
return 0;
}
