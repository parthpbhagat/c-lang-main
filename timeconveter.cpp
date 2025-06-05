#include <iostream>
#include <iomanip>

void convertSecondsToHHMMSS(int totalSeconds) {
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    std::cout << std::setfill('0') << std::setw(2) << hours << ":"
              << std::setfill('0') << std::setw(2) << minutes << ":"
              << std::setfill('0') << std::setw(2) << seconds << std::endl;
}

int main() {
    int seconds;
    std::cout << "Enter time in seconds: ";
    std::cin >> seconds;

    convertSecondsToHHMMSS(seconds);

    return 0;
}
