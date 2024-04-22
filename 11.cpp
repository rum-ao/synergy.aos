#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("11.txt");

    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            double latitude, longitude;
            sscanf(line.c_str(), "(%lf, %lf)", &latitude, &longitude);
            if (latitude >= 50 && latitude <= 80 && longitude >= 20 && longitude <= 45) {
                cout << "(" << latitude << ", " << longitude << ")" << endl;
            }
        }
        inputFile.close();
    } else {
        cerr << "Не удалось открыть файл." << endl;
        return 1;
    }

    return 0;
}