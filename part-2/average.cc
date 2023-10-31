// TODO: Add the required header

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "Error: Please provide at least one command line argument.\n";
    return 1;
  }
  double sum(0.0);
  for (size_t i = 1; i < arguments.size(); ++i) {
    sum += std::stod(arguments[1]);
  }
  double average = sum / static_cast<double>(arguments.size() - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
