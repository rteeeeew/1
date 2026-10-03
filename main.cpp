// 第一个 C++ 程序：按 F5 可以直接编译并调试
#include <iostream>
#include <string>
#include <vector>

// 一个最简的类，用来体验面向对象的基本写法
class Greeter {
public:
    explicit Greeter(std::string name) : name_(std::move(name)) {}

    void sayHello() const {
        std::cout << "Hello, " << name_ << "!" << std::endl;
    }

private:
    std::string name_;
};

int main() {
    Greeter greeter("C++");
    greeter.sayHello();

    // 循环和容器的小例子
    std::vector<int> numbers{1, 2, 3, 4, 5};
    int sum = 0;
    for (int n : numbers) {
        sum += n;
    }
    std::cout << "1 + 2 + 3 + 4 + 5 = " << sum << std::endl;

    // 在这里可以设置断点，按 F5 逐行调试
    std::cout << "Language standard: " << __cplusplus << std::endl;
    return 0;
}
