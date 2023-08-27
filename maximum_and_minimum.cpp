#include<iostream>
using namespace std;
#define SIZE 50
int main()
{
    int array[SIZE];
    int i, max, min, size;
// input size of the array
cout<< "enter size of the array:"<<endl;
cin>>size;

//input array elements
cout<<endl << " Enter" << size << "Element in the array: " <<endl;
for(i=0; i < size; i++)
cin>> array[i];

//assume first element is as a maximum and minmum
max = array[0];
min = array [0];
//find maximum minmum in all array elements.
for (i=1; i < size; i++)
{
    //if current element is greater than max
    if(array[i] > max)
    max = array[i];
    //if current element is smaller than min
    if(array[i] < min)
    min = array [i];
}
cout << endl << "maximum elements =" << max<< endl;
cout << endl << "Minimum Elements is = " << min ;

}