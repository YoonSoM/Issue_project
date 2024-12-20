#include <iostream>
#include <vector>
#include <iomanip>

class EnergyMonitor {
public:
    void addConsumption(float kWh) {
        monthlyConsumption.push_back(kWh);
    }

    void displayConsumption() {
        std::cout << "\n월별 전기 사용량 (kWh):" << std::endl;
        for (size_t i = 0; i < monthlyConsumption.size(); ++i) {
            std::cout << "월 " << (i + 1) << ": " << monthlyConsumption[i] << " kWh" << std::endl;
        }
    }

    void analyzeConsumption() {
        if (monthlyConsumption.empty()) {
            std::cout << "데이터가 없습니다." << std::endl;
            return;
        }

        float total = 0;
        for (float consumption : monthlyConsumption) {
            total += consumption;
        }

        float average = total / monthlyConsumption.size();
        std::cout << "\n총 전기 사용량: " << total << " kWh" << std::endl;
        std::cout << "평균 전기 사용량: " << average << " kWh" << std::endl;

        if (average > 300) {
            std::cout << "에너지 절약 팁: 사용량이 평균보다 높습니다. 전기 사용을 줄이는 방법을 고려해보세요." << std::endl;
        }
        else {
            std::cout << "좋습니다! 에너지 사용량이 평균 이하입니다." << std::endl;
        }
    }

private:
    std::vector<float> monthlyConsumption;
};

int main() {
    EnergyMonitor monitor;
    int choice;
    float consumption;

    while (true) {
        std::cout << "\n1. 전기 사용량 추가" << std::endl;
        std::cout << "2. 전기 사용량 조회" << std::endl;
        std::cout << "3. 소비 분석" << std::endl;
        std::cout << "4. 종료" << std::endl;
        std::cout << "옵션을 선택하세요: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "이번 달 전기 사용량 (kWh)을 입력하세요: ";
            std::cin >> consumption;
            monitor.addConsumption(consumption);
            break;
        case 2:
            monitor.displayConsumption();
            break;
        case 3:
            monitor.analyzeConsumption();
            break;
        case 4:
            std::cout << "프로그램을 종료합니다." << std::endl;
            return 0;
        default:
            std::cout << "잘못된 선택입니다. 다시 시도하세요." << std::endl;
        }
    }

    return 0;
}
