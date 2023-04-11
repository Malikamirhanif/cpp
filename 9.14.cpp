# include<iostream>
# include <math.h>
using namespace std;
void even (int n);
int main()
{int a[5],i;
cout<<"Enetr Numbers\n";
for(i=1;i<=5;i++)
{cin>>a[i];
even(a[i]);
cout<<"\n";
}
system ("pause");
return 0;
}
void even (int n)
{int j;
{if(n%2==0)
cout<<"True";
else
{cout<<"False";
}
}
}
