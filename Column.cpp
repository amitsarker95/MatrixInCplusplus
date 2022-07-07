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
int specific_col;
cin>>specific_col;
int sum = 0;
for(int i=0;i<row;i++){
    sum += arr[i][specific_col];
}
cout<<sum<<endl;

return 0;
}

