#include<iostream>
using namespace std;
#define SIZE 50

int main() 
{
    int array [SIZE];
    int i, max, min, size;
    cout<< "Enter Size of an array: " << endl;
    cin>>size;

    cout<<endl << "enter" << size << "Element of array: "<<endl;
    for( i=0; i < size; i++)
    // for(i < size; i=0;  i++)
    cin>>array[i];

    //assume first element is a maximum and minimum
    max=array[0];
    min = array [0];

    //if fistt

    for(i=1; i< size; i++)
     {
        if(array[i]>max)
        max=array[i];

        if(array[i]<min)
        min=array[i];
    }
    cout << endl << "maximum elements =" << max<< endl;
cout << endl << "Minimum Elements is = " << min ;
}