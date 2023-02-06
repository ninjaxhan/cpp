// https://m.blog.naver.com/ndb796/221226794899
// 정렬 알고리즘 
// 선택 정렬 : 작장 작은걸 선택해서 앞으로 보낸다. 
// 시간 : 10 + 9 + 8 + ....+ 1 (등차수열)
// 10 * (10+1) / 2 = 55
// N * (N + 1) / 2
// N이 엄청크다고 가정하면 더하거나 나누는것은 무시한다. 
// O(N * N)  <= 간략하게 표시하는 빅오표기법
// O(N^2)

#include <stdio.h>

int main(void) {
    int i, j, min, index, temp;
    int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

    for(i = 0; i < 10; i++) {
        min = 9999;
        for(j = i; j < 10; j++) {
            // 작은값 찾기
            if(min > array[j]) {
                min = array[j]; 
                index = j;      // 최소값의 위치를 알아냄
            }
        }

        // 위치 교환
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    // 출력 
    for(i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

