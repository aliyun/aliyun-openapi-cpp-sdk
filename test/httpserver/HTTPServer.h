/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   HTTPServer.h
 * Author: root
 *
 * Created on November 5, 2016, 5:46 PM
 */

#ifndef HTTPSERVER_H
#define HTTPSERVER_H
#include <list>
#include "ServerThread.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string>
#include <iostream>

using namespace std;

class HTTPServer {
public:
  HTTPServer(int port);
  HTTPServer(const HTTPServer& orig);
  virtual ~HTTPServer();
  void RunServer();
  void RunTerminator();
  void StartServer();
  void StartTerminator();
  void Stop();
private:
  pthread_t server, terminator;
  // a list of active clients
  list<ServerThread*> aclients;
  // socket fields
  int sockfd, portno;
  sockaddr_in serv_addr, cli_addr;
  socklen_t clilen;
};

#endif /* HTTPSERVER_H */

