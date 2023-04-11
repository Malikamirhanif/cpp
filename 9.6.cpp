# include<iostream>
# include<math.h>
using namespace std;
void mul (int a,int b);
int main()
{int x,y;
cout<<"Enter First number\n";
cin>>x;
cout<<"Enter Second number\n";
cin>>y;
mul (x,y);
system ("pause");
return 0;
}
void mul (int a,int b)
{if(a<b)
{if(b%a ==0 )
cout<<"Yes Multiple";
else
cout<<"No Not a Multiple";
}
else
{if (a%b == 0)

cout<<"Yes Multiple";
else
{cout<<"No Not a Multiple";
}
}
}
