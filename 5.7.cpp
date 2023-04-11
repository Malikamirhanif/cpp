# include<iostream>
using namespace std;
int main()
{cout<<"following are categories\n";
cout<<"A for adventure\n";
cout<<"C for Comedy\n";
cout<<"F for Family \n";
cout<<"H for Horror\n";
cout<<"S for Science Fiction\n ";
char ch;
cout<<"Enter your character";
cin>>ch;
switch(ch)
{

case 'a':
case'A':
	{cout<<"Adventure";
	break;
	};
case'c':
case'C':
	{cout<<"comedy";
	break;
	};
case'f':
case'F':
	{cout<<"Family";
	break;
	};
case'h':
case'H':
	{cout<<"Horror";
	break;
	};
case's':
case'S':
	{cout<<"Science Fiction";
	break;
	};
default:
{cout<<"invalid choice";
};
};
system("pause");
return 0;
}
