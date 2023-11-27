#include <iostream>

int main() {
    int H, M;
    std::cin >> H >> M;

    // 45분을 빼고 음수가 되면 시간을 조정함
    M -= 45;
    if (M < 0) {
        M += 60;
        H -= 1;
        if (H < 0) {
            H = 23;
        }
    }

    // 결과 출력
    std::cout << H << " " << M << std::endl;

    return 0;
}
