# include <iostream>
using namespace std;
int main()
{int age;
cout<<"Enter Your Age";
cin>>age;
if(age>=10 && age<=50)
{if(age>=10 && age<=19)
{
cout<<"Teenager";}
else
{cout<<"Not a Teenager";
}
}
else
{if(age<10 && age>50)
{cout<<"child";
}
else
{cout<<"more then 50";
}
}
system("pause");
return 0;
}
