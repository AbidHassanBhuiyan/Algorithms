#include<iostream>
using namespace std;
void LinearSearch(int arr1[],int n,int itm)
{
    int position=-1;
    for(int i=0; i<n; i++)
    {
        if(arr1[i]==itm)
        {
            position=i+1;
            break;
        }
    }
    if(position!=-1)
    {
        cout<<"Iteam Found in : "<<position;
    }
    else
    {
        cout<<"Not Found !!!";
    }


}
int main()
{

    int arr[]= {65, 22, 9, 2, 43, 63, 33, 8, 99, 19, 29, 44, 74, 22, 5, 8, 2, 66, 98, 11,
                78, 45, 32, 88, 11, 67, 90, 23, 56, 78, 9, 77, 34, 65, 22, 55, 80, 44, 66, 30,
                39, 63, 75, 12, 57, 82, 19, 88, 31, 68, 44, 76, 25, 93, 8, 54, 77, 20, 98, 46,
                13, 52, 89, 14, 72, 28, 51, 94, 38, 71, 17, 63, 29, 82, 45, 67, 22, 55, 79, 30,
                26, 23, 56, 91, 16, 74, 42, 69, 15, 88, 31, 77, 78, 30, 73, 18, 55, 58, 27, 51};
    int size=sizeof(arr)/sizeof(arr[0]);

    int iteam;
    cout<<"Enter The Number To Search :";
    cin>>iteam;
    LinearSearch(arr,size,iteam);


}
