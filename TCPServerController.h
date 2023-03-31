//
// Created by di on 2023/3/31.
//

#ifndef SERVERACHITECTURE_TCPSERVERCONTROLLER_H
#define SERVERACHITECTURE_TCPSERVERCONTROLLER_H


#include <stdint.h>
#include <string>

//forward referencing
class TcpNewConnectionAcceptor *tcp_new_conn_acc;   //负责链接
class TcpClintDbManager *tcp_client_db_mgr;         //负责存储 connection（一个cliet对应一个）
class TcpClientServiceManager *tcp_client_sev_mgr;  //

class TcpServerController
{
public:
    TcpServerController(std::string ip_address , uint16_t portNum , uint32_t ipAddress);
    ~TcpServerController();
    void Start();
    void Stop();


public:
    uint32_t ip;
    uint16_t port;
    std::string Name;




};

#endif //SERVERACHITECTURE_TCPSERVERCONTROLLER_H
