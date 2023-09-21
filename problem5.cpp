#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    cout << "Enter a sentence with numbers: ";
    char ch;
    double sum = 0;
    string word;
    bool endOfSentence = false;

    while (cin.get(ch)) {
        if (isdigit(ch) || ch == '.' || ch == '-') {
            word += ch;
        } else if (ch == ' ' || ch == '\n' || ch == '?') {
            if (!word.empty()) {
                double num = stod(word);
                sum += num;
                word.clear();
            }

            if (ch == '\n' || ch == '?') {
                endOfSentence = true;
                if (ch == '?') {
                    cin.ignore(256, '\n');
                }
                break;
            }
        }
    }

    cout << "The sum is " << sum << endl;
    return 0;
}
