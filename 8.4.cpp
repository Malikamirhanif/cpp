# include<iostream>
using namespace std;
struct book
{int bi;
char bn[19][20];
float bp;
};
struct order
{int id;
book x;

};
int main()
{order o[10];int i;
for(i=0;i<5;i++)
{cout<<"Enter order id\n";
cin>>o[i].id;
cout<<"Enter Book id\n";
cin>>o[i].x.bi;
cout<<"Enter Book name\n";
cin>>o[i].x.bn[i];
cout<<"Enter Book price\n";
cin>>o[i].x.bp;

}
for(i=0;i<5;i++)
{cout<<"\nOrder id is\t"<<o[i].id<<"\n"<<"Book id is \t"<<o[i].x.bi<<"\n"<<"Book name\t"<<o[i].x.bn[i]<<"\n"<<"Book price\t"<<o[i].x.bp;
}





}
