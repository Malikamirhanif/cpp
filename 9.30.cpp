# include<iostream>
using namespace std;
struct pop
{char n[30];
float p;
};
void lp (pop t,pop q);
int main()
{pop x,y;
int b,c,d,e,i;

cout<<"Enter Data of Two cities\n";

{cout<<"Enter name of 1st city\n";
cin>>x.n;
cout<<"Enter 1st\'s Population\n";
cin>>x.p;
cout<<"Enter name 2nd city\n";
cin>>y.n;
cout<<"Enetr population of 2nd city\n";
cin>>y.p;
}
lp(x,y);
system ("pause");
return 0;


}
void lp(pop t,pop q)
{
if(t.p<q.p)
{cout<<"Name of less populated\t"<<t.n<<"\t"<<t.p;
}
{cout<<"name of less populated \t"<<q.n<<"\t"<<q.p;}
 } 
