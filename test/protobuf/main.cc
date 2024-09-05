#include "test.pb.h"
#include <iostream>
using namespace fixbug;
int main()
{
    LoginRequest req;
    req.set_name("zhang san");
    req.set_pwd("123456");
    //序列化
    std::string send_str;
    if(req.SerializeToString(&send_str)){
        std::cout << send_str <<std::endl;
    }

    //反序列化
    LoginRequest reqB;
    if(reqB.ParseFromString(send_str)){
        std::cout << reqB.name() << std::endl;
        std::cout << reqB.pwd() << std::endl;
    }
    return 0;
}
