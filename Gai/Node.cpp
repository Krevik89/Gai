#include "Node.h"

ostream& operator<<(ostream& os, const Node& Obj) {
    os << Obj.violation << endl;
    return os;
}