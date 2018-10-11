#include<iostream>
using namespace std;

class q
{
    public: float a[30];
            int i,j,m,n;

    void get()
    {
        cout<<"\nEnter the number of students in the class :";
        cin>>n;
        cout<<"\nEnter the SGPA of students in the class :";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"\nEntered SGPA of students are :";
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        quick(0,n-1);

        cout<<"\nSGPA of students after Quick sorting are :";
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        }

    void swap(int l,int m)
    {
        float temp=a[l];
        a[l]=a[m];
        a[m]=temp;

    }
    int partition(int low,int high)
    {
        float pivot=a[low];
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
{
    q q1;
    q1.get();


};
