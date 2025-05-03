#include <iostream>

class GenericTypeParamType {
private:
    unsigned depth;

public:
    GenericTypeParamType(unsigned d) : depth(d) {}

    unsigned getDepth() const; 

    void setDepth(unsigned d);
};

