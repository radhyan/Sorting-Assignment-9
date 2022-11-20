#include <iostream>

using namespace std;

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
    sort(random, random + size);
    for (int i = 0; i < size; ++i)
            cout << random[i] << " ";
    
    return 0;
}
