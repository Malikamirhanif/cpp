# include<iostream>
using namespace std;
void pr (int*m);
int main()
{int a,b;
cout<<"Enter value to check\n";
cin>>a;
pr (&a);
system("pause");
return 0;
}
void pr (int*m)
{int i,p=0;
for(i=0;i<*m;i++)
{if(*m%i==0)
{p++;
}
}
if(p==1);
cout<<"Prime";
}
