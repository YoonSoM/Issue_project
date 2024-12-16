#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// 스팸과 정상 메일 수
int spamCount = 0;
int hamCount = 0;

// 단어 빈도 맵
unordered_map<string, int> spamWords;
unordered_map<string, int> hamWords;

// 훈련 데이터 로드
void loadData(const string& filename) {
    ifstream file(filename);
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string content, label;
        getline(ss, content, ',');
        getline(ss, label, ',');

        if (label == "spam") {
            spamCount++;
            // 단어 빈도 계산
            stringstream words(content);
            string word;
            while (words >> word) {
                spamWords[word]++;
            }
        }
        else {
            hamCount++;
            stringstream words(content);
            string word;
            while (words >> word) {
                hamWords[word]++;
            }
        }
    }
}

// 예측 함수
string predict(const string& message) {
    double spamProbability = log(spamCount / double(spamCount + hamCount));
    double hamProbability = log(hamCount / double(spamCount + hamCount));

    stringstream words(message);
    string word;
    while (words >> word) {
        spamProbability += log((spamWords[word] + 1) / double(spamCount + 2));
        hamProbability += log((hamWords[word] + 1) / double(hamCount + 2));
    }

    return spamProbability > hamProbability ? "spam" : "ham";
}

int main() {
    loadData("data.csv"); // 데이터 파일 경로
    string testMessage;

    cout << "메시지를 입력하세요: ";
    getline(cin, testMessage);

    string result = predict(testMessage);
    cout << "예측 결과: " << result << endl;

    return 0;
}
