#include "test2.pb.h"
#include <iostream>
#include <string>

int main() {
    fixbug::LoginRequest req;
    req.set_name("zhangsan");
    req.set_pwd("123456");

    std::string send_str;
    if(req.SerializeToString(&send_str)) {
        std::cout << send_str.c_str() << std::endl;
    }
    return 0;
}