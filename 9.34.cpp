# include<iostream>
using namespace std;
void disp (int y[][5]);
void times2 (int z[][5] );
int main()
{int a[5][5],i,j;
cout<<"Enter elements in 2-D Array\n";
for(i=0;i<5;i++)
for(j=0;j<5;j++)
{cin>>a[i][j];
}
disp(a);
cout<<"\n";
cout<<"Elements after double\n";
times2(a);

cout<<"\n";
system ("pause");
return 0;
}
void disp(int y[][5])
{int k,l;
cout<<"Elements of Array\n";
for(k=0;k<5;k++)
for(l=0;l<5;l++)
{cout<<y[k][l]<<"  ";
}

};
void times2 (int z[][5])
{int m,n;
for(m=0;m<5;m++)
for(n=0;n<5;n++)
{
cout<<z[m][n]*2<<"  ";
}}
