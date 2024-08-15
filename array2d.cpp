#include <iostream>
using namespace std;

bool findkey(int a[][2],int row,int col, int key){
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
    if (a[i][j]==key)
    return true;
}
}
return false;
}

//transpose
void transpose(int a[][2],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            swap(a[i][j],a[j][i]);
        }
        
    }
}






int main(){

    int a[2][2]={{1,2},{3,4}};
    cout<<a[0][0]<<endl;
for(int i =0;i<2;i++){
    for( int j=0;j<2;j++){
 cout<< a[i][j]<<" ";
    }
    cout<<endl;
}
    //column wise
    for(int i =0;i<2;i++){
    for( int j=0;j<2;j++){
 cout<< a[j][i]<<" ";
    }
    cout<<endl;
}



cout<<"key search"<<  findkey(a,3,3,2)<<endl;



transpose(a,2,2);
}
