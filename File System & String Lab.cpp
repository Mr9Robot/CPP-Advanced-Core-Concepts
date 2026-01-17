/* Lab: Persistent Storage and Advanced String Processing */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void WriteToFile(std::string fileName) {
    std::ofstream file;
    file.open(fileName, std::ios::out); // Write Mode
    if (file.is_open()) {
        file << "Record 1: C++ Advance\n";
        file << "Record 2: Cybersecurity\n";
        file.close();
    }
}

void LoadDataToVector(std::string fileName, std::vector<std::string>& vData) {
    std::ifstream file(fileName);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            vData.push_back(line);
        }
        file.close();
    }
}

int main() {
    std::string fileName = "Database.txt";
    std::vector<std::string> content;

    try {
        WriteToFile(fileName);
        LoadDataToVector(fileName, content);
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    // String Manipulation
    std::string text = "Hazem Hamada Emara";
    std::cout << "Length: " << text.length() << "\n";
    std::cout << "Substring: " << text.substr(0, 5) << "\n";

    return 0;
}