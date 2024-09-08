#pragma once
#include "google/protobuf/service.h"

// 专门用于发布rpc服务的网络对象类
class RpcProvider
{
private:
    
public:
    // 框架提供给外部使用，可以发布rpc方法的函数接口
    void NotifyService(google::protobuf::Service *service());
    // 启动rpc服务节点，开始提供rpc远程网络调用服务
    void Run();
};

