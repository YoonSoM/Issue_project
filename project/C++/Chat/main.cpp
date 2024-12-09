#include <iostream>
#include <string>
#include <algorithm>

std::string getResponse(const std::string& input) {
    std::string lowerInput = input;
    std::transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower);

    if (lowerInput == "안녕" || lowerInput == "안녕하세요") {
        return "안녕하세요! 어떻게 도와드릴까요?";
    }
    else if (lowerInput == "이름이 뭐예요?") {
        return "저는 간단한 챗봇입니다.";
    }
    else if (lowerInput == "날씨 어때요?") {
        return "날씨는 좋습니다! 당신은 어떤 날씨를 좋아하나요?";
    }
    else if (lowerInput == "고마워" || lowerInput == "감사합니다") {
        return "천만에요! 또 궁금한 점이 있으면 말씀해 주세요.";
    }
    else {
        return "죄송해요, 그 질문에 대한 답변을 모르겠어요.";
    }
}

int main() {
    std::string userInput;

    std::cout << "챗봇에 오신 것을 환영합니다! 질문을 입력하세요 (종료하려면 '종료' 입력):" << std::endl;

    while (true) {
        std::getline(std::cin, userInput);
        if (userInput == "종료") {
            std::cout << "챗봇을 종료합니다. 안녕히 가세요!" << std::endl;
            break;
        }
        std::string response = getResponse(userInput);
        std::cout << response << std::endl;
    }

    return 0;
}
