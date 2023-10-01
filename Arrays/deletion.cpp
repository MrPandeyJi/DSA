#include<iostream>
using namespace std;

void printArr(int arr[], int size){
        for( int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
}

void delElement(int arr[], int size, int ele){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==ele){
            for(int j=i; j<size;j++){
                 arr[j]= arr[j+1];
            }  
        }
    }
    size--;
    printArr(arr,size);
    

}

int main(){
    int size, ele;
    cout<<"Enter size of the array \n";
    cin>>size;
    int arr[size];

    for(int i =0; i <size; i++){
        cout<<"enter the value at "<<i+1<<" index: ";
        cin>>arr[i];
        cout<<endl;
    }
    
    cout<<"enter the element to be deleted : ";
    cin>>ele;

    delElement(arr,size, ele);

    return 0;
}
