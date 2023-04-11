# include<iostream>
using namespace std;
class player
{char n[50],tn[30];
float avg;
public:
	void chng (void);
	void input (void);
	void disp (void);
	
};
void player:: chng (void)
{cout<<"Enter Average\n";
cin>>avg;
cout<<"Enter Team name\n";
cin.getline(tn,30);
cout<<"Enter Name\n";
cin.getline(n,50);
}
void player:: disp (void)
{cout<<"Player name\t"<<n<<"\n";
cout<<"Average\t"<<avg<<"\n";
cout<<"Team Name\t"<<tn;
}
void player ::input (void)
{cout<<"Enter player name\n";
cin.getline(n,50);
cout<<"Enter Team name\n";
cin.getline(tn,30);
cout<<"Enter average\n";
cin>>avg; 
}
int main()
{player o;
o.input();
o.disp();
cout<<"\nTo change Values\n";
o.chng ();
cout<<"\nThe changed values are\n";
o.disp();

system ("pause");
return 0;
}
