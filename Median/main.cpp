#include <iostream>

using namespace std;

// insertion sorting + prints the sorted array
void insertionSort(int data[], int dataSize){
    int i, temp;
    // array is going to be sort
    for(int j = 1; j<dataSize; j++) {
        i = j-1;
        temp=data[j];
        while(data[i]>temp && i>=0){
            data[i+1] = data[i];
            i--;
        }
        data[i+1] = temp;
    }
    //sorted array is going to be print
    for (int i = 0; i < dataSize; i++){
        cout<<data[i]<<" ";
    }
}

// will use the sorted array (also printing the sorted array) to determine the median in the array
int median (int data[], int dataSize){
    //executing the insertion fuction in line 6
    insertionSort(data, dataSize);
    //just a divider to mention the median is after printing the sorted array
    cout<<"\nThe median is"<<endl;
    //determines the median when the data size is odd
    if (dataSize % 2 != 0)
        return (int)data[dataSize / 2];
    //determines the median when the data size is even
    return (int)(data[(dataSize - 1) / 2] + data[dataSize / 2]) / 2;
    
}

int main() {
    //initializer
    int dataSize, data[10];
    //user input the size of array
    cout<<"Input data size "; cin>>dataSize;
    //user input the element of the arrat according to the array size
    cout<<"Input element of array ("<<dataSize<<" much) ";
    for (int i = 0; i < dataSize; i++){
        cin>>data[i];
    }
    //the elements inputted will be printed
    cout<<"The sorted data of ";
    for (int i = 0; i < dataSize; i++){
        cout<<data[i]<<" ";
    }
    //executing line 24
    cout<<"\nis "<<median(data, dataSize)<<endl;
    
    return 0;
}
