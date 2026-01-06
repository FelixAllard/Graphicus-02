//
// Created by xilef on 1/6/2026.
//

#ifndef GRAPHICUS__02_TESTGRAPHICUS_H
#define GRAPHICUS__02_TESTGRAPHICUS_H


#include "TestGraphicus.cpp"

int main() {
    bool allOk = TestCalculator::runAll();  // run all tests
    return allOk ? 0 : 1;  // GitHub Actions uses exit code to check success
}



#endif //GRAPHICUS__02_TESTGRAPHICUS_H