#include<iostream>
#include<filesystem>
#include<fstream>
namespace fs = std::filesystem;

int main() {
  fs::path p_out{"C:\\out.txt"};
  fs::path p_in{"C:\\in.txt"};
  std::ofstream output{p_out};
  std::ifstream input{p_in};
  if (input.fail()) {
    std::cout << "in.txt does not exist";
  }
  return 0;
}