#include<iostream>
using namespace std;
int TinhSoUoc(int num) {
	int dem=1;
    int d=1;
    for (int i = 2; i <= num; ++i) {    
    	 d=0;
        while (num % i == 0) {
        	++d;
            num /= i;
        }
        ++d;
        dem*=d;
    }
    return dem;
}

int main() {
    int num;
 for (int i=1;i<=100;i++)
    {
    	if (TinhSoUoc(i)==10)
    	cout<< i << " ";
	}
	 return 0;
}