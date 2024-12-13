#include <iostream>
#include <thread>
#include <chrono>
#include <ctime>

class SleepAlarm {
public:
    void setAlarm(int averageSleepHours) {
        std::cout << "알람이 설정되었습니다. " << averageSleepHours << "시간 후에 알람이 울립니다.\n";
        std::this_thread::sleep_for(std::chrono::hours(averageSleepHours));
        ringAlarm();
    }

    void ringAlarm() {
        std::cout << "띠링! 알람이 울립니다! 일어날 시간입니다!\n";
    }
};

int main() {
    SleepAlarm alarm;
    int averageSleepHours;

    std::cout << "평균 수면 시간을 입력하세요 (시간 단위): ";
    std::cin >> averageSleepHours;

    if (averageSleepHours <= 0) {
        std::cerr << "올바른 평균 수면 시간을 입력하세요.\n";
        return 1;
    }

    alarm.setAlarm(averageSleepHours);
    return 0;
}
