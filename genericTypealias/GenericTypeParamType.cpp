#include "GenericTypeParamType.h"

unsigned GenericTypeParamType::getDepth() const {
    return depth;
}

void GenericTypeParamType::setDepth(unsigned d) {
    depth = d;
}

//// Example usage:
int main() {
    GenericTypeParamType param1(0);
    GenericTypeParamType param2(1);

    std::cout << "param1 depth: " << param1.getDepth() << std::endl;
    std::cout << "param2 depth: " << param2.getDepth() << std::endl;

    return 0;
}
