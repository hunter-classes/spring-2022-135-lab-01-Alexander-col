#include <iostream>

void smaller3 (int a, int b, int c){
  if (a<b && a<c){
    std::cout << "The smaller of the three is " << a << std::endl;
  }else if (b<a && b<c){
    std::cout << "The smaller of the three is " << b << std::endl;
  } else if (c<a && c<b){
    std::cout << "The smaller of the three is"  << c << std::endl;
  }
}
int main(){

  int a;
  int b;
  int c;
  std::cout << "Enter the first number:" << std::endl;
  std::cin >> a;
  std::cout << "Enter the second number:" << std::endl;
  std::cin >> b;
  std::cout << "Enter the thrid Number:" << std:: endl;
  std::cin >> c;
  smaller3(a,b,c);
  return 0;
}
