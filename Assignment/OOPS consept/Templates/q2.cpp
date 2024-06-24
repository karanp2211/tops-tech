//Write a program of to sort the array using templates.
#include<iostream>
using namespace std;
template<typename t>
t sort(t arr[6]){
    t i,j,temp;

    cout<<"before sorting:";
    for(i=0;i<7;i++){
        cout<<"\t"<<arr[i];
    }

    for(i=0;i<7;i++){
        for(j=0;j<i;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\n After sorting:";
    for(i=0;i<7;i++){
        cout<<"\t"<<arr[i];
    }
}

int main(){
    int arr[7]={4,6,44,22,34,45,52};
    cout<<sort<int>(arr)<<endl;
   
}