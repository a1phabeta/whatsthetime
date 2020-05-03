#include <ctime>
#include <iomanip>
#include <iostream>

#define PROJECT_NAME "whatsthetime"

int main() {
  std::time_t current_time = std::time(nullptr);
  std::cout << "The current time is "
            << std::put_time(std::localtime(&current_time), "%R, %z") << '\n';
  return 0;
}
