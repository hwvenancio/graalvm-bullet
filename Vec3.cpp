#include <polyglot.h>
#include <stdio.h>

class btVector3 {
public:
    float m_floats[4];
};

POLYGLOT_DECLARE_TYPE(btVector3)

extern "C" void *allocNativeVector() {
    btVector3 *ret = new btVector3();
    return polyglot_from_btVector3(ret);
}

extern "C" void freeNativeVector(btVector3 *p) {
    delete p;
}

extern "C" void printVector(btVector3 *p) {
    printf("btVector3<%f,%f,%f>\n", p->m_floats[0], p->m_floats[1], p->m_floats[2]);
}
