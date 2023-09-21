#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

bool containsNumber(const std::string& word) {
    for (char c : word) {
        if (std::isdigit(c)) {
            return true;
        }
    }
    return false;
}

int main() {
    // The provided sample string
    std::string inputString = "The University of Alabama in Huntsville was founded in 1950 and became an autonomous campus with The University of Alabama System in 1969. Since that time, it has grown into one of the nation's premiere research universities, offering a challenging hands-on curriculum that ensures our graduates are prepared to become tomorrow's leaders. Why GO to UAHuntsville? Our beautiful campus is in the heart of Huntsville, Alabama. Also known as the Rocket City, Huntsville has all";

    // Use a stringstream to split the input string into words
    std::istringstream iss(inputString);
    std::string word;

    std::cout << "Word Length\tWord\n";

    while (iss >> word) {
        // Check if the word contains numbers
        if (!containsNumber(word)) {
            std::cout << word.length() << "\t\t" << word << "\n";
        }
    }

    return 0;
}
