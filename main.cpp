#include <windows.h>

int main()
{
  inject("hack.dll");
  system("sc stop vgk");
  std::cout << "Hack loaded!;
  return 0;
}
