#include <iostream>

int main() {
    int H, M;
    std::cin >> H >> M;

    // 45���� ���� ������ �Ǹ� �ð��� ������
    M -= 45;
    if (M < 0) {
        M += 60;
        H -= 1;
        if (H < 0) {
            H = 23;
        }
    }

    // ��� ���
    std::cout << H << " " << M << std::endl;

    return 0;
}
