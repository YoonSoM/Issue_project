#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// ���԰� ���� ���� ��
int spamCount = 0;
int hamCount = 0;

// �ܾ� �� ��
unordered_map<string, int> spamWords;
unordered_map<string, int> hamWords;

// �Ʒ� ������ �ε�
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
            // �ܾ� �� ���
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

// ���� �Լ�
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
    loadData("data.csv"); // ������ ���� ���
    string testMessage;

    cout << "�޽����� �Է��ϼ���: ";
    getline(cin, testMessage);

    string result = predict(testMessage);
    cout << "���� ���: " << result << endl;

    return 0;
}
