# include<iostream>
using namespace std;
int main()
{int m;float p;
cout<<"Enter marks";
cin>>m;
p=(0.0909*m);
cout<<"percentage is \n"<<p;
if(p>=80)
{cout<<"Grade is\n"<<"A+";
}
else if(p>=70)
{cout<<"Grade is \n"<<"A";
}
else if(p>=60)
{cout<<"Grade is \n"<<"B";
}
else if (p>=50)
{cout<<"Grade is \n"<<"C";
}
else if(p>=40)
{cout<<"Grade is\n"<<"D";
}
else if(p>=33)
{cout<<"Grade is \n"<<"E";
}
else
{cout<<"Grade is\n"<<"F";
}
system("pause");
return 0;
}
