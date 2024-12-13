#include <iostream>
#include <thread>
#include <chrono>
#include <ctime>

class SleepAlarm {
public:
    void setAlarm(int averageSleepHours) {
        std::cout << "�˶��� �����Ǿ����ϴ�. " << averageSleepHours << "�ð� �Ŀ� �˶��� �︳�ϴ�.\n";
        std::this_thread::sleep_for(std::chrono::hours(averageSleepHours));
        ringAlarm();
    }

    void ringAlarm() {
        std::cout << "�층! �˶��� �︳�ϴ�! �Ͼ �ð��Դϴ�!\n";
    }
};

int main() {
    SleepAlarm alarm;
    int averageSleepHours;

    std::cout << "��� ���� �ð��� �Է��ϼ��� (�ð� ����): ";
    std::cin >> averageSleepHours;

    if (averageSleepHours <= 0) {
        std::cerr << "�ùٸ� ��� ���� �ð��� �Է��ϼ���.\n";
        return 1;
    }

    alarm.setAlarm(averageSleepHours);
    return 0;
}
