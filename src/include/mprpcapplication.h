#pragma once

// rpc框架初始化类
class MprpcApplication
{
private:
    MprpcApplication(){}
    MprpcApplication(const MprpcApplication&) = delete;
    MprpcApplication(MprpcApplication&) = delete;
public:
    static void Init(int argc,char **argv);
    static MprpcApplication& GetInstance();
};

