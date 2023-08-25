#include <iostream>
#include<math.h>
using namespace std;

bool IsPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
void Eratosthenes(int n,int A[])
{   
	for (int i=2;i<=sqrt(n);i++)
	{
		if (IsPrime(i)) 
		{   for (int j=2;j<=n;j++)
			if (A[j] %i ==0 && A[j]!=0 &&A[j]>i ) A[j]=0; 
		}
	}
	int dem;
	for (int i=2;i<=n;i++)
	{
		if (A[i]!=0) 
		{
		cout<<A[i] <<" ,";
		dem++;
	}
	}
	cout<<dem;
}
int main()
{    int n;
     cout<<"Nhap n "; cin>>n;
     int A[n+1];
     for (int i=0;i<=n;i++)
     {
	 A[i]=i;
     }
	 Eratosthenes( n,A);
	return 0;
}
