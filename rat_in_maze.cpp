#include<iostream>
using namespace std;
bool is_safe(int** arr,int x,int y,int n)
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    return false;
}
bool rat_in_maze(int** arr,int x,int y,int n,int** soln_arr)
{  if(x==n-1 && y==n-1)
{    soln_arr[x][y]==1;
    return true;
}
    if(is_safe(arr,x,y,n))
    {
        soln_arr[x][y]=1;
        if(rat_in_maze(arr,x+1,y,n,soln_arr))
        {
            return true;
        }
        if(rat_in_maze(arr,x,y+1,n,soln_arr))
        {
            return true;
        }
        soln_arr[x][y]=0;
        return false;
    }
    return false;
}
int main()
{   int n;
    cout<<"ENTER THE NUMBER OF ROWS OF A SQUARE MATRIX : ";
    cin>>n;
    int** arr=new  int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int [n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>>arr[i][j];
        }
    }
    int**soln_arr=new  int*[n];
    for(int i=0;i<n;i++)
    {
        soln_arr[i]=new int [n];
        for(int j=0;j<n;j++)
        {
            soln_arr[i][j]=0;
        }
    }
    cout<<endl;
    if(rat_in_maze(arr,0,0,n,soln_arr))
    {
           for(int i=0;i<n;i++)
          {
                 for(int j=0;j<n;j++)
              {
                   cout<<soln_arr[i][j]<<" ";
              }
                    cout<<endl;
          }


    }
    return 0;
    }
