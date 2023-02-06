//cpp

#include <iostream>

using namespace std;

typedef struct Fish {
  char name[30];  // 이름
  int age;        // 나이

  int health;  // 체력
  int food;    // 배부른 정도
  int clean;   // 깨끗한 정도

  // 여기까지는 Animal 과 동일하다.
  int deep;  // 현재 깊이

} Fish;


class cStandard {
    private:
    int set_num;

    public:
    cStandard();                // 기본 생성자
    cStandard(int x);

    void Input(int* a_data, int num);
    void Input(int* a_data, int num, int limit);
    int Count();
    void Output(int* a_data, int num);
    void swap(int *a, int *b);
};

cStandard::cStandard()
    : set_num(10) {
}

cStandard::cStandard(int x)
    : set_num(x) {
}

int cStandard::Count() { return set_num; }

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
    cStandard cSt();

    int a = cSt.Count();

    //int *a_data = new int[cSt.Count()];

    //cSt::Input(a_data, cSt.Count());





}