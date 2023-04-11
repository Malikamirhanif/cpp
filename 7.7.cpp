# include <iostream>
using namespace std;
int main()
{int i,j,am[10],ao[10],ab[10],k=1,size; long int total[i];
cout<<"Enter how many customers do you have\n";
cin>>size;
cout<<"Enter data of customers\n";
for(i=1;i<=size;i++)
{
cout<<"Mangoes\n";
cin>>am[i];
cout<<"Oranges\n";
cin>>ao[i];
cout<<"Bananas\n";
cin>>ab[i];
total[i]=((am[i]*20)+(ao[i]*10)+(ab[i]*5));
}
cout<<"Entered Data is:-\n\n\n\n";
cout<<"Customer No.\t"<<"Mangoes\t"<<"Oranges\t"<<"Bananas\t"<<"Total Bill\n";
for(i=1;i<=size;i++)
{cout<<"\t"<<k<<"\t"<<am[i]<<"\t"<<ao[i]<<"\t"<<ab[i]<<"\t"<<total[i]<<"\n";
k++;}
system ("pause");
return 0;


}
