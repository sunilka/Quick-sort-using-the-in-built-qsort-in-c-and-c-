#include<bits/stdc++.h>
using namespace std;
int compare(const void *a,const void *b)
{
    return (*(int*)a > *(int*)b);
}

int main()
{
    int n;
    cout<<"Please enter the number of elements in the array \n";
    cin>>n;
    cout<<"please enter the elements of the array :\n";
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    qsort(a,n,sizeof(int),compare);

    printf("\n the elements of the array after sorting are:\n");
    for(int i=0;i<n;i++)
        printf("%3d ",a[i]);
}
