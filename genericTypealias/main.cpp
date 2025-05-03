#include <vector>

#include "GenericTypeParamType.h"

int main() {
    GenericTypeParamType object1(0);
    GenericTypeParamType object2(1);

    std::cout << "object1 depth: " << object1.getDepth() << std::endl;
    std::cout << "object2 depth: " << object2.getDepth() << std::endl;

    std::vector<GenericTypeParamType*> types;
    types.push_back(&object1);
    types.push_back(&object2);

    std::vector<GenericTypeParamType*> mutableNominalParams(
    types.rbegin(), types.rend());

    unsigned maxDepth = 1;

    return 0;
}

