#include<iostream>
#include<math.h>
using namespace std;
bool isPerfectNumber(int num) {
    if (num <= 1) {
        return false;
    }

    int sum = 1;

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }

    return sum == num;
}

int main()
{   long n;
	cout<<"Nhap n \n ";
	cin >> n;
	for (long i=2;i<=n;i++)
	{
		if (isPerfectNumber(i)) 
		cout<< i << ",";
	}
	return 0;
}