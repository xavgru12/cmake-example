#include "GenericTypeParamType.h"

int main() {
    GenericTypeParamType object1(0);
    GenericTypeParamType object2(1);

    std::cout << "object1 depth: " << object1.getDepth() << std::endl;
    std::cout << "object2 depth: " << object2.getDepth() << std::endl;

    return 0;
}
