#include<iostream>
using namespace std;
void pt(int num) {
   

    for (int i = 2; i <= num; ++i) {
        while (num % i == 0) {
            std::cout << i << " ";
            num /= i;
        }
    }

    std::cout << std::endl;
}

int main() {
    int num;
    std::cout << "Nhap 1 so : ";
    std::cin >> num;

   pt(num);

    return 0;
}