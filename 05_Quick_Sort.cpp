//cpp

#include <iostream>

using namespace std;


class cStandard {
    int num;

 public:
    cStandard();
    cStandard(int x);
    void Input(int* a_data, int num);
    void Input(int* a_data, int num, int limit);
    void Output(int* a_data, int num);
}

cStandard::cStandard()
    : num(10) {
}

cStandard::cStandard(int x)
    : num(x) {
}

void cStandard::Input(int* a_data, int num) {
    int i;

    for (i = 0; i < num; i++) {
        std::cout << i+1 << "번째 정수 입력 : " << std::endl;
        std::cin >> a_data[i];
    }
}

void cStandard::Input(int* a_data, int num, int limit) {
    int i;

    for (i = 0; i < num; i++) {
        std::cout << i+1 << "번째 정수 입력 : " << std::endl;
        std::cin >> a_data[i];

        if(a_data[i] > limit) {
            std:cout << i+i << "번째 정수 재입력 요청" << std::endl;
            i--;
        }
    }
}

void cStandard::Output(int* a_data, int num) {
    int i;

    for (i = 0; i < num; i++) {
        printf("%d ", a_data[i]);
    }
    printf("\n\r");
}

void cStandard::swap(int *a, int *b) {
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
    cStandard cStandard();

    int *a_data = new int[cStandard.num];

    cStandard::Input(a_data, cStandard.num);





}