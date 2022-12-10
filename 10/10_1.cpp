#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>
// g++ Main.cpp -lm -lcrypt -O2 -std=c++11

int main(int argc, const char *argv[]) {
  int result, cycle = 0;
  int reg = 1;
  std::string word;
  while (std::cin >> word) {
    cycle++;
    if (word == "addx") {
      if ((cycle - 20) % 40 == 0 && cycle <= 220) {
        result = result + cycle * reg;
      }

      std::cin >> word;
      cycle++;
      if ((cycle - 20) % 40 == 0 && cycle <= 220) {
        result = result + cycle * reg;
      }
      int number = std::stoi(word);
      reg += number;
      std::cout << number << std::endl;
    } else {
      if ((cycle - 20) % 40 == 0 && cycle <= 220) {
        result = result + cycle * reg;
      }
    }
  }
  std::cout << result << " result" << std::endl;
  return 0;
}
