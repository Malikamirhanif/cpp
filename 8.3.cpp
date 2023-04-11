# include<iostream>
using namespace std;
struct dues
{int income;
float tr;
float t;
};
int main()
{dues r[10];
int i;float a;
for(i=0;i<5;i++)
{cout<<"\n";
cout<<"Enter income\n";
cin>>r[i].income;
cout<<"Enter tax rate\n";
cin>>r[i].tr;
a=(r[i].income*0.5);

cout<<"\n tax is    \t"<<a; 
}
system ("pause");
return 0;
}
