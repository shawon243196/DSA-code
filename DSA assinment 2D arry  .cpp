//1. Write a program to interchange the row and column of a matrix.
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n+1][n+1];
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
    cin>>arr[i][j];
  }
 }
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
    cout<<arr[j][i]<<" ";
  }
  cout<<endl;
 }
return 0;
}
//2. Write a program to add two matrices.
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n+1][n+1];
  int arr1[n+1][n+1];
  
  int x[n+1][n+1];
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
    cin>>arr[i][j];
  }
 }
for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
    cin>>arr1[i][j];
  }
 }
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
    x[i][j]=0;
    x[i][j]=arr[i][j]+arr1[i][j];
  }
}
for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
    cout<<x[i][j]<<" ";
  }
  cout<<endl;
 }
return 0;
}
//3. Write a program to calculate the rowsum and columnsum of a matrix.
#include<iostream>
using namespace std;
int main()
{
  int row,col;
  cin>>row>>col;
  int arr[row][col];
  int rowsum=0;
  int columsum=0;
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
    cin>>arr[i][j];
  }
 }
for(int i=0;i<row;i++)
{
  rowsum=0;
  for(int j=0;j<col;j++)
  {
    rowsum+=arr[i][j];
  }
  cout<<"Rowsum "<< i+1 <<" = "<<rowsum<<endl;
}
for(int j=0;j<col;j++)
{
 for(int i=0;i<row;i++)
  {
    columsum+=arr[i][j];
  }
  cout<<"Columsum "<< j+1 <<" = "<<columsum<<endl;
}
return 0;
}
//4. Write a program to calculate the multiplication of two matrices.
#include<iostream>
using namespace std;

int main()
{
    int row, col, col1;
    cin >> row >> col >> col1;
    
    int arr[row][col];
    int arr1[col][col1];
    int x[row][col1];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            x[i][j] = 0;
            for(int k = 0; k < col; k++)
            {
             x[i][j] = x[i][j] + arr[i][k] * arr1[k][j];
            }
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col1; j++)
        {
        cout << x[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

