#include "slib.h"

std::string buildHelloWorldMsg(const std::string& hello, const std::string& world) {
    std::string result = hello + ", " + world + "!";
    return result;
}
