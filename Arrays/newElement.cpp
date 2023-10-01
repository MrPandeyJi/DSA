#include<iostream>
using namespace std;

void printArr(int arr[], int size){
        for( int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
}

void addNewElement(int arr[], int size, int pos, int ele){
    size++;
    for (int i = size; i >=pos; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos]=ele;
    printArr(arr, size);
    

}

int main(){
    int size, pos, ele;
    cout<<"Enter size of the array \n";
    cin>>size;
    int arr[size];

    for(int i =0; i <size; i++){
        cout<<"enter the value at "<<i+1<<" index: ";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"actual array: ";
    printArr(arr,size);

    cout<<"\nEnter the position and the element to be inserted : ";
    cin>>pos>>ele;

    addNewElement(arr, size, pos, ele );
    return 0;
}
