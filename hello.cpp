#include "getString.h"
#include "dlib.h"
#include "slib.h"

int main() {
    std::string hello = upperFirst(getHello()), world = getWorld();
    printMsg(buildHelloWorldMsg(hello, world));
}
