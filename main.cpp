#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

int main(int, char**){

  // Adjust Colors Displayed to terminal and hello world message
  std::vector<uint32_t> colors = {30,31,32,33,34,35,36,37,0};
  std::string hello_world = "Hello World!";

  srand(static_cast<uint32_t>(time(nullptr)));
  for (auto c : hello_world){
    if (c != '\n') std::cout << "\033[" << colors[rand() % colors.size() - 1] << "m";
    std::cout << c;
  }
  std::cout << "\033[" << colors.back() << "m" << std::endl;
}
