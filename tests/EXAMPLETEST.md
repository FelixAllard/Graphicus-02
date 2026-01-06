```c++
// TestCalculator.h
#pragma once
#include "Calculator.h"
#include <iostream>

class TestCalculator {
public:
    static bool runAll() {
        bool ok = true;
        ok &= testAdd();
        ok &= testSub();
        return ok;
    }

private:
    static bool testAdd() {
        int result = Calculator::add(2,3);
        if(result == 5) {
            std::cout << "[PASS] Calculator::add\n";
            return true;
        } else {
            std::cout << "[FAIL] Calculator::add got " << result << "\n";
            return false;
        }
    }

    static bool testSub() {
        int result = Calculator::sub(5,2);
        if(result == 3) {
            std::cout << "[PASS] Calculator::sub\n";
            return true;
        } else {
            std::cout << "[FAIL] Calculator::sub got " << result << "\n";
            return false;
        }
    }
};

```

and in main
```c++
// TestRunner.cpp
#include "TestCalculator.h"
#include "TestAnotherClass.h" //This is another one

int main() {
    bool ok = true;
    ok &= TestCalculator::runAll(); // We just do runAll, which we defined, which does all the tests we need
    ok &= TestAnotherClass::runAll();
    
    return ok ? 0 : 1; // exit code for CI
}


```