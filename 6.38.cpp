# include<iostream>
# include<iomanip>
using namespace std;
int main()
{int i,j,k=0;
for(i=5;i>=1;i--)
{{for(j=1;j<=5-k;j++)
cout<<j<<"\t";}
k++;
cout<<"\n";
}
system("pause");
 return 0;
}
