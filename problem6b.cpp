#include <iostream>
#include <string>

int main(){
  std::string str = "I do not care what people say , what matters most is family , and desire and hungry for success";

  std::string str2 = str.substr (1,3);
  std::size_t pos = str.find ("desire");
  std::string str3 = str.substr (pos);
  std::cout << str2 << ' ' << str3 << '\n';

  return 0;
}


// pos
// Position of the first character to be copied as a substring.
// If this is equal to the string length, the function returns an empty string.
// If this is greater than the string length, it throws out_of_range.
// Note: The first character is denoted by a value of 0 (not 1).
