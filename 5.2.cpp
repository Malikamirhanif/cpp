# include <iostream>
using namespace std;
int main()
{char a;
cout<<"Enter your status ";
cin>>a;
switch(a)
{case 's':
case'S':
cout<<"your salary is"<<"400";
break;
case 'j':
case 'J':
cout<<"your salary is"<<"275";
break;
default:
	cout<<"invalid";
	
}
system("pause");
return 0;
}
