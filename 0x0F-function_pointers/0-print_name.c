#include <iostream>
#include <string>
void printName(const std::string& name) {
std::cout << "Hello, " << name << "!" << std::endl;
}
int main() {
std::string name = "John Doe";
printName(name);
return 0;
}
