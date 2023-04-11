# include <iostream>
using namespace std;
int main()
{int n;
cout<<"Enter a choice";
cin>>n;
switch(n)
{case 1:
	{cout<<"Western Digital";
	break;
	};
case 2:
	{cout<<"3M Corporation";
	break;
	};
case 3:
	{cout<<"Maxell Corporatin";
	break;
	};
case 4:
	{cout<<"Sony Corporation";
	break;
	};
case 5:
	{cout<<"Verbatim Corporation";
	break;
	}
default:
	{cout<<"invalid choice";
	}
}
system("pause");
return 0;
}
