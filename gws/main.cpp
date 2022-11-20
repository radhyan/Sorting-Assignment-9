#include <iostream>

using namespace std;

void generate (int size){

}

void insertionAscend(int data[], int size){
    int i, temp;
    for(int j = 1; j < size; j++) { // array is going to be sort
        i = j-1;
        temp = data[j];
        while(data[i] > temp && i>=0){
            data[i+1] = data[i];
            i--;
        }
        data[i+1] = temp;
    }
    cout<<"\nThe sorted data ascendingly using insertion sort is: "<<endl;
    for (int i = 0; i < size; i++){ //sorted array is going to be print
        cout<<data[i]<<" ";
    }
}

void insertionDescend(int data[], int size){
    int i, temp;
    for(int j = 1; j < size; j++) { // array is going to be sort
        i = j-1;
        temp = data[j];
        while(data[i] < temp && i>=0){
            data[i+1] = data[i];
            i--;
        }
        data[i+1] = temp;
    }
    cout<<"\nThe sorted data descendingly using insertion sort is: "<<endl;
    for (int i = 0; i < size; i++){ //sorted array is going to be print
        cout<<data[i]<<" ";
    }
}

void selectionAscend(int data[], int size){
    int temp;
    for(int i = 0; i<size; i++) {
        int min = i;
        for(int j=1+i; j<size; j++){
            if(data[j] < data[min]){
            min = j;
        }
    }
    temp = data[i]; data[i] = data[min]; data[min] = temp;
    }
    cout<<"\nThe sorted data ascendingly using selection sort is: "<<endl;
    for(int i = 0;i<size;i++){ cout<<data[i]<<" ";
    }
}

void selectionDescend(int data[], int size){
    int temp;
    for(int i = 0; i<size; i++) {
        int min = i;
        for(int j=1+i; j<size; j++){
            if(data[j] > data[min]){
            min = j;
        }
    }
    temp = data[i]; data[i] = data[min]; data[min] = temp;
    }
    cout<<"\nThe sorted data descendingly using selection sort is: "<<endl;
    for(int i = 0;i<size;i++){ cout<<data[i]<<" ";
    }
}


int main(){
    int size;
    cout<<"Input size of array that want to be generated "; cin>>size;
    
    //Generate random array with number between 0 to 99
    int random[size];
       for(int i=0;i<size;i++)
          random[i]=rand()%100;
      
       cout<<"\nElements of the array:"<<endl;
      
    for(int i=0;i<size;i++){
        cout<<random[i]<<" ";
    }
    cout<<endl;
    insertionAscend(random, size);
    insertionDescend(random, size);
    selectionAscend(random, size);
    selectionDescend(random, size);
    return 0;
}
