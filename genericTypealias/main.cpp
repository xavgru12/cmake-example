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
    types.begin(), types.end());

    unsigned maxDepth = 1;


    for (auto parameter = mutableNominalParams.rbegin();
         parameter != mutableNominalParams.rend(); ) {
      if ((*parameter)->getDepth() == maxDepth) {
        auto it_to_erase = std::next(parameter).base(); // base() gives forward iterator
        parameter = std::reverse_iterator(mutableNominalParams.erase(it_to_erase));
      } else {
        ++parameter;
      }
    }

    return 0;
}

