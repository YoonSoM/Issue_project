#include <iostream>
#include <vector>
#include <iomanip>

class EnergyMonitor {
public:
    void addConsumption(float kWh) {
        monthlyConsumption.push_back(kWh);
    }

    void displayConsumption() {
        std::cout << "\n���� ���� ��뷮 (kWh):" << std::endl;
        for (size_t i = 0; i < monthlyConsumption.size(); ++i) {
            std::cout << "�� " << (i + 1) << ": " << monthlyConsumption[i] << " kWh" << std::endl;
        }
    }

    void analyzeConsumption() {
        if (monthlyConsumption.empty()) {
            std::cout << "�����Ͱ� �����ϴ�." << std::endl;
            return;
        }

        float total = 0;
        for (float consumption : monthlyConsumption) {
            total += consumption;
        }

        float average = total / monthlyConsumption.size();
        std::cout << "\n�� ���� ��뷮: " << total << " kWh" << std::endl;
        std::cout << "��� ���� ��뷮: " << average << " kWh" << std::endl;

        if (average > 300) {
            std::cout << "������ ���� ��: ��뷮�� ��պ��� �����ϴ�. ���� ����� ���̴� ����� ����غ�����." << std::endl;
        }
        else {
            std::cout << "�����ϴ�! ������ ��뷮�� ��� �����Դϴ�." << std::endl;
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
        std::cout << "\n1. ���� ��뷮 �߰�" << std::endl;
        std::cout << "2. ���� ��뷮 ��ȸ" << std::endl;
        std::cout << "3. �Һ� �м�" << std::endl;
        std::cout << "4. ����" << std::endl;
        std::cout << "�ɼ��� �����ϼ���: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "�̹� �� ���� ��뷮 (kWh)�� �Է��ϼ���: ";
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
            std::cout << "���α׷��� �����մϴ�." << std::endl;
            return 0;
        default:
            std::cout << "�߸��� �����Դϴ�. �ٽ� �õ��ϼ���." << std::endl;
        }
    }

    return 0;
}
