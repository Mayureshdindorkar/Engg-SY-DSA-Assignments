#include<iostream>
using namespace std;

class sort
{
private:float a[20],pivot;
public:int i,j,m,n;

void get()
{
    cout<<"\nEnter the number of elements in float array :";
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<"\nEntered array is :";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

    quick(0,n-1);

    cout<<"\nSorted array is :";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
void swap(int i,int j)
{
    float temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int partition(int low,int high)
{
    pivot=a[low];
    i=low+1;
    j=high;

    while(i<=j)
    {
        while(a[i]<pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        swap(i,j);
    }
    swap(low,j);
    return j;
}
void quick(int low,int high)
{
    if(low<high)
    {
        m=partition(low,high);
        quick(low,m-1);
        quick(m+1,high);
    }
}
};
int main()
{   cout<<"\n*****QUICK SORT*****\n";
    sort s1;
    s1.get();
}
