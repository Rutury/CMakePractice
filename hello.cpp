#include <iostream>
#include "getString.h"
#include "dlib.h"
#include "slib.h"

int main() {
    std::string world(getWorld());
    std::cout << upperFirst(getHello()) << upperFirst(world) << std::endl;
}
