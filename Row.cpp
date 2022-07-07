#include<bits/stdc++.h>
using namespace std;

int main(){
int row, col;
cin>>row>>col;
int arr[row][col];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}
int specific_row;
cin>>specific_row;
for(int i=0;i<col;i++){
    cout<<arr[specific_row][i]<<" ";
}


return 0;
}
