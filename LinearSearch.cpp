/*#include<iostream>
using namespace std;
int main()
{
    int x;
    int arr[5]={30,40,20,100,50};
  /*  for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }*/
    for(int i=0;i<5;i++)
    {
        if(arr[i]==30)
        {
            cout<<"Number found in "<<i+1<<endl;
            break;
        }
    }
}*/
#include<iostream>
using namespace std;
void LinearSrc(int arr1[],int n,int itm)
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

    int arr[]= {56, 23, 89, 12, 45, 67, 34, 78, 90, 1, 99, 43, 76, 21, 54, 87, 32, 65, 98, 10,
                78, 45, 32, 88, 11, 67, 90, 23, 56, 78, 9, 77, 34, 65, 22, 55, 80, 44, 66, 30,
                89, 43, 75, 12, 57, 82, 19, 88, 31, 68, 44, 76, 25, 93, 8, 54, 77, 20, 98, 46,
                33, 65, 89, 14, 72, 28, 51, 94, 38, 71, 17, 63, 29, 82, 45, 67, 22, 55, 79, 39,
                66, 23, 56, 91, 16, 74, 42, 69, 15, 81, 36, 70, 18, 60, 37, 86, 50, 95, 27, 53
               };
    int size=sizeof(arr)/sizeof(arr[0]);

    int iteam;
    cout<<"Enter The Number To Search :";
    cin>>iteam;
    LinearSrc(arr,size,iteam);


}
