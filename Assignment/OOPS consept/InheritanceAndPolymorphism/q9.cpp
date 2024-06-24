//Write a Program of Two 1D Matrix Addition using Operator Overloading.
#include<iostream>
using namespace std;
class Matrix{
    public:
    int a[2][2];
    public:
    void getdata(){
        cout<<"\n Enter element of matrix:\n";
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<" ";
                cin>>a[i][j];
            }
        }
    }
    void display(){
        for(int i=0;i<2;i++){
            cout<<" ";
            for(int j=0;j<2;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    void operator +(Matrix m){
        int mat[2][2];
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                mat[i][j]=a[i][j] + m.a[i][j];
            }
        }
        cout<<"After addition=\n";
        for(int i=0;i<2;i++){
            cout<<" ";
            for(int j=0;j<2;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
};
int main(){
    Matrix m1,n1;
    m1.getdata();
    n1.getdata();
    cout<<"\n First matrix: \n";
    m1.display();
    cout<<"\n Second matrix: \n";
    n1.display();
    m1+n1;
}