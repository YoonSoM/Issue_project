#include <iostream>
#include <string>
#include <algorithm>

std::string getResponse(const std::string& input) {
    std::string lowerInput = input;
    std::transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower);

    if (lowerInput == "�ȳ�" || lowerInput == "�ȳ��ϼ���") {
        return "�ȳ��ϼ���! ��� ���͵帱���?";
    }
    else if (lowerInput == "�̸��� ������?") {
        return "���� ������ ê���Դϴ�.";
    }
    else if (lowerInput == "���� ���?") {
        return "������ �����ϴ�! ����� � ������ �����ϳ���?";
    }
    else if (lowerInput == "����" || lowerInput == "�����մϴ�") {
        return "õ������! �� �ñ��� ���� ������ ������ �ּ���.";
    }
    else {
        return "�˼��ؿ�, �� ������ ���� �亯�� �𸣰ھ��.";
    }
}

int main() {
    std::string userInput;

    std::cout << "ê���� ���� ���� ȯ���մϴ�! ������ �Է��ϼ��� (�����Ϸ��� '����' �Է�):" << std::endl;

    while (true) {
        std::getline(std::cin, userInput);
        if (userInput == "����") {
            std::cout << "ê���� �����մϴ�. �ȳ��� ������!" << std::endl;
            break;
        }
        std::string response = getResponse(userInput);
        std::cout << response << std::endl;
    }

    return 0;
}
