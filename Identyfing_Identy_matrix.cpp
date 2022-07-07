#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }
    if(row != col)
    {
        cout<<"NO"<<endl;
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)continue;
            if(arr[i][j]>0)
            {
                cout<<"NO"<<endl;
                return 0;
            }

        }
    }
    int save;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)
            {
                if(i==0 && j==0) save = arr[i][j];
                else
                {
                    if(save != arr[i][j])
                    {
                        cout<<"Not Scaler"<<endl;
                        return 0;
                    }
                }
            }

        }
    }

    cout<<"Scaler"<<endl;
    cout<<save<<endl;

    return 0;
}

