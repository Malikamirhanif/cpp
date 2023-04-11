# include<iostream>
using namespace std;
int main()
{int n,a,b; char ch;
cout<<"Enter F to convert farenheit to degree and C vice versa";
cin>>ch;
cout<<"Enter value of temp";
cin>>n;
if(ch=='f')
{a=0.55*(n-32);
cout<<"value in celcius is:"<<a;
}
else if (ch=='c')
{b=1.8*(n+32);
cout<<"value in farenheit is:"<<b;
}
else
{cout<<"invalid choice";
}
system("pause");
return 0;
}
