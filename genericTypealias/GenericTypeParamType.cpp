#include "GenericTypeParamType.h"

unsigned GenericTypeParamType::getDepth() const {
    return depth;
}

void GenericTypeParamType::setDepth(unsigned d) {
    depth = d;
}

