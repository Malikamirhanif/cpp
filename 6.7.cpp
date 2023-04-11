# include<iostream>
using namespace std;
int main()
{int i,a,b,min;
cout<<"Enter a number";
cin>>a;
min=a;
for(i=1;i<20;i++)
{cout<<"Enter a number";
cin>>b;
if(b<min)
min=b;
}
cout<<"minimum value is"<<"\t"<<min;
system("pause");
return 0;
}
