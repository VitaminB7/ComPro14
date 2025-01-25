#include<iostream>
using namespace std;


template <typename T>
void insertionSort(T d[],int N){
    
    for (int i = 1; i < N; i++)
    {   
        int j = i-1;
        T temp = d[i];
        
        while(d[j]<temp && j>=0){
        d[j+1]=d[j];
        j=j-1;
        }
        
        d[j+1]=temp;
        cout<<"Pass "<<i<<":";
        for(int k=0;k<10;k++)cout<<d[k]<< " ";
        cout<<'\n';
    }
}
