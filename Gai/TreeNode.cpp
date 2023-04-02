#include "TreeNode.h"

ostream& operator<<(ostream& os, const TreeNode& N) {
    os << N.car;
    return os;
}