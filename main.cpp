#include <windows.h>

int main()
{
  inject("hack.dll");
  std::cout << "Hack loaded!";
  while (true)
  {
    system("sc stop vgk");  
  }
  return 0;
}
