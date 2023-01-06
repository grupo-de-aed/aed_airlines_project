#include <iostream>
#include <string>
#include "code/Menu.h"

using namespace std;

int main() {
    try {
        Menu mainMenu;
    }
    catch (std::ios_base::failure &fail) {
        Menu::Error(fail.what());
        return 1;
    }
    catch (std::exception &ex) {
        Menu::Error(ex.what());
        return 1;
    }
    return 0;
}