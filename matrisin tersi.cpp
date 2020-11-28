
#include <cmath>

#include<iostream>

using namespace std;

int main ()
{

double a[5][5],cozum[5][5];
double det,kof[5][5],ters[5][5];
for(int i=0;i<5;i++)
{for(int j=0;j<5;j++)
{  
cout <<"<"<<i<<","<<j<<"> = " << endl;
cin>>a[i][j];
}
cout<<endl;  }
cout<<"  Girilen matris : "<<endl;
cout<<"__________________ "<<endl;
for(int i=0;i<5;i++)
{for(int j=0;j<5;j++)
{  cout<<a[i][j]<<"  ";
}
cout<<endl;  }
{

int det( int matrix[5][5], int n) {
   int det = 0;
   int submatrix[10][10];
   if (n == 2)
   return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
   else {
      for (int x = 0; x < n; x++) {
         int subi = 0;
         for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
               if (j == x)
               continue;
               submatrix[subi][subj] = matrix[i][j];
               subj++;
            }
            subi++;
         }
         det = det + (pow(-1, x) * matrix[0][x] * determinant( submatrix, n - 1 ));
      }
   }}

{

int kof=0, p, h, k, i, j, temp[MAX][MAX];
  if(n==1) {
    return a[i][j];
  } else if(n==2) {
    kof=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
    return det;
  } else {
    for(p=0;p<n;p++) {
      h = 0;
      k = 0;
      for(i=1;i<n;i++) {
        for( j=0;j<n;j++) {
          if(j==p) {
            continue;
          }
          temp[h][k] = a[i][j];
          k++;
          if(k==n-1) {
            h++;
            k = 0;
          }
        }
      }

}}

for(int i=0;i<=4;i++)
{for(int j=0;j<=4;j++)

for(int i=0;i<5;i++)
{for(int j=0;j<5;j++)
{
ters[i][j] = kof[i][j]/det;/
}}
cout<<"  Girilen matrisin tersi : "<<endl;
cout<<"________________________ "<<endl;
{
for(int i=0;i<=2;i++)
{for(int j=0;j<=2;j++)
{
cout<<" |"<< ters[i][j]<<" "<< "|";
}
cout<<endl;
}
}}
cout<<endl;

return 0;}}}
