# include<iostream>
using namespace std;
int main()
{int i,j,k;
for(i=1;i<=2;i++)
{for(j=1;j<=i;j+=2)
cout<<"* * * * *\n";
if(i==1)
{for(k=1;k<=4;k++){

cout<<"*       *\n";j++;
}
}
}
system("pause");
return 0;
}
