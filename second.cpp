#include <iostream>

int main(int argc, char* argv[])
{
  if (argc < 2){
    std::cout << "Hello world!" << std::endl;
  } else {
    std::cout << "Hi, " << argv[1] << ", how was your day?" << std::endl;
  }
  return 0;
}
