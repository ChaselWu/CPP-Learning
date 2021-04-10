#include <filesystem>
#include <fstream>
#include <iostream>
#include<iomanip>
namespace fs = std::filesystem;
const double pie{3.1415926};
int main() {
  fs::path p_out{"C:\\out.txt"};
  fs::path p_in{"C:\\in.txt"};
  std::ofstream output{p_out};
  std::ifstream input{p_in};

  if (output.fail()) {
    std::cout << "out.txt does not exist"<<std::endl;
  }
  if (input.fail()) {
    std::cout << "in.txt does not exist" << std::endl;
  }
  for (int i = 0; i < 5; i++) {
    output << std::setw(static_cast<std::streamsize>(i + 1)) << pie << " ";
  }
  return 0;
}