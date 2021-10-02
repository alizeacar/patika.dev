// Insertion sort in C++
/*
22,27,16,2,18,6 initial array
22 -27 small one 22-27
27-16 small one 16 so 16-22-27-2-18-6
2-16-22-27-18-6
2-16-18-22-27-6
2-6-16-18-22-27
time complexity=o(n'2) bc we used all elements and it is worst case

7,3,5,8,2,9,4,15,6] dizisinin Insertion sort'a göre ilk 4 adýmýný yazýnýz.

1.adim=7-3 3<7 so 3,7,5,8,2
2.adim 3,5,7,8,2
3.adým 3,5,7,8,2
4.adim 2,3,5,7,8

*/

#include <iostream>
using namespace std;

void printArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(int array[],int size)
{
    for(int a=1;a<size;a++)
    {
        int key=array[a];
        int j=a-1;
        while(key<array[j] && j>=0)
        {
            array[j+1]=array[j];
            --j;

        }
        array[j+1]=key;
    }
}
int main()
{
    int data[] = {22,27,16,2,18,6};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  cout << "Sorted array in ascending order:\n";
  printArray(data, size);
}
