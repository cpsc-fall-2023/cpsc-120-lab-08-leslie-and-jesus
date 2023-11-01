// Jesus Yanez
// JYZamora@csu.fullerton.edu
// @Jesus-Yanez
// Partners: @lesliecjimenez

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (argc <= 1) {
    std::cout << "Error: Please provide at least one command line argument.\n";
    return 1;
  }
  double sum(0.0);
  for (int i = 1; i < argc; i++) {
    sum += std::stod(arguments[i]);
  }
  double average = 0.0;
  average = sum / (argc - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
