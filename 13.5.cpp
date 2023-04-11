# include<iostream>
using namespace std;
char di;
float pos;
class car
{char name[7];
char dr;
float p;
public:
	car()
	{char name[7]="suzuki";
	dr='e';
	p=2;
	}
	void turn(void)
	{if(dr=='e')
	{dr='s';
	cout<<"Direction is\t"<<dr;
	}
	else if(dr=='s')
	{dr='w';
	cout<<"Direction is\t"<<dr;
	}
	else if(dr=='w')
	{dr='N';
	cout<<"Direction is\t"<<dr;
	}
	else
	{dr='E';
	cout<<"Direction is\t"<<dr;
	}
	}
	void turn(char ch)
	{
	cout<<"New direction is\t"<<dr;}
	void move(int po)
	{
	cout<<"\nNew position is"<<po;
	}};
	int main()
	{car o;
	o.turn();
	cout<<"\n\t to change Direction\n";
	cout<<"\n\tEnter new direction\n";
	cin>>di;
	o.turn(di);
	cout<<"\n\t to change Position\n";
	cout<<"\n\tEnter new position";
	cin>>pos;
	o.move(pos);
	system("pause");
	return 0;
	}

