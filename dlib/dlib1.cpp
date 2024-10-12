#include "dlib.h"

std::string upperFirst(const std::string& s) {
    std::string result(s);
    if (s.length() > 0 && s[0] >= 'a' && s[0] <= 'z') result[0] -= 32;
    return result;
}
