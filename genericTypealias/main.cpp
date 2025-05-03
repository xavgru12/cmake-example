#include "GenericTypeParamType.h"

int main() {
    GenericTypeParamType param1(0);
    GenericTypeParamType param2(1);

    std::cout << "param1 depth: " << param1.getDepth() << std::endl;
    std::cout << "param2 depth: " << param2.getDepth() << std::endl;

    return 0;
}
