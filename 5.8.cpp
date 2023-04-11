# include <iostream>
using namespace std;
int main()
{int n,a,b,c,d; char ch;
cout<<"Enter I to convert inches to centimeter \n G to convert gallons to litters \n M to convert miles to kilometer \n P to convert pounds to kilogram";
cout<<"Enter a choice";
cin>>ch;
cout<<"Enter value";
cin>>n;
switch(ch)
{case 'i':
case 'I':
	{a=n*2.54;
	cout<<"in centimeters"<<a;
	break;
	};
case 'G':
case'g':
	{b=n*3.785;
	cout<<"in littres"<<b;
	break;
	};
case'm':
case'M':
	{c=n*1.609;
	cout<<"in kilometers"<<c;
	break;
	};
case'p':
case'P':
	{d=n*0.4536;
	cout<<"in kilograms"<<d;
	break;};
default:
	{cout<<"invalid";
	};
	};
system ("pause");
return 0;}
