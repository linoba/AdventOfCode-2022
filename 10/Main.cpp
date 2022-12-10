#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>

int main(int argc, const char *argv[]) {
  int result, cycle = 0;
  int reg = 1;
  std::string word;
  while (std::cin >> word) {
    cycle++;
    int pos = cycle % 40;

    if (word == "addx") {
      if ((cycle - 20) % 40 == 0 && cycle <= 220) {
        result = result + cycle * reg;
      }

      if (pos >= (reg - 0) && pos <= (reg + 2)) {
        std::cout << '#';
      } else {
        std::cout << '.';
      }
      if (pos % 40 == 0)
        std::cout << std::endl;

      std::cin >> word;
      cycle++;
      pos = cycle % 40;
      if ((cycle - 20) % 40 == 0 && cycle <= 220) {
        result = result + cycle * reg;
      }

      if (pos >= (reg - 0) && pos <= (reg + 2)) {
        std::cout << '#';
      } else {
        std::cout << '.';
      }
      if (pos % 40 == 0)
        std::cout << std::endl;
      int number = std::stoi(word);
      reg += number;
    } else {
      if ((cycle - 20) % 40 == 0 && cycle <= 220) {
        result = result + cycle * reg;
      }

      if (pos >= (reg - 0) && pos <= (reg + 2)) {
        std::cout << '#';
      } else {
        std::cout << '.';
      }
      if (pos % 40 == 0)
        std::cout << std::endl;
    }
  }
  std::cout << result << " result" << std::endl;
  return 0;
}
