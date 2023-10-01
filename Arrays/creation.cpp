#include<iostream>
using namespace std;

void printArr(int arr[], int size){
        for( int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
}

int main(){
    int size;
    cout<<"Enter size of the array \n";
    cin>>size;
    int arr[size];

    for(int i =0; i <size; i++){
        cout<<"enter the value at "<<i+1<<" index: ";
        cin>>arr[i];
        cout<<endl;
    }

    printArr(arr,size);

    return 0;
}
