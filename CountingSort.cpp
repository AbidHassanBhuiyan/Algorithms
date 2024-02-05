#include<iostream>
using namespace std;

int FindMax(int arr[], int n)
{
    int max=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

void CountingSort(int arr1[],int k, int m)
{

    int count[k];
    int arr2[m];
    for(int i=0; i<k; i++)
    {
        count[i]=0;
    }

    for(int i=0; i<m; i++)
    {
        ++count[arr1[i]];
    }

    for(int i=1; i<k; i++)
    {
        count[i]=count[i-1]+count[i];
    }

    for(int i=m-1; i>=0; i--)
    {
        arr2[--count[arr1[i]]]=arr1[i];
    }
    for(int i=0; i<m; i++)
    {
        arr1[i]=arr2[i];
    }
}
void show(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arrUnSorted []= {65, 22, 9, 2, 43, 63, 33, 8, 99, 19, 29, 44, 74, 22, 5, 8, 2, 66, 98, 11,
                78, 45, 32, 88, 11, 67, 90, 23, 56, 78, 9, 77, 34, 65, 22, 55, 80, 44, 66, 30,
                39, 63, 75, 12, 57, 82, 19, 88, 31, 68, 44, 76, 25, 93, 8, 54, 77, 20, 98, 46,
                13, 52, 89, 14, 72, 28, 51, 94, 38, 71, 17, 63, 29, 82, 45, 67, 22, 55, 79, 30,
                26, 23, 56, 91, 16, 74, 42, 69, 15, 88, 31, 77, 78, 30, 73, 18, 55, 58, 27, 51};
    int size=sizeof(arrUnSorted)/sizeof(arrUnSorted[0]);
    int k= FindMax(arrUnSorted,size)+1;
    CountingSort(arrUnSorted,k,size);
    show(arrUnSorted,size);
}
