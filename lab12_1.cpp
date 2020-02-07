#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double a[],int n,double b[]){
    double sum=0,X=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }

    b[0]=sum/n;
    
    for (int i = 0; i < n; i++)
    {
        X+=pow(a[i],2); //ซิกม่าXi^2
    }
    
    b[1]=sqrt(X/n-pow(b[0],2));

    for (int j = 0; j < n; j++)
    {
        if(b[3]>a[j]){ b[3]=a[j];}
        if(b[2]<a[j]){ b[2]=a[j];}
    }
    
   




    
    
}