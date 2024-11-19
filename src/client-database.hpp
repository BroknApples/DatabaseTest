#ifndef CLIENT_DATABASE_HPP
#define CLIENT_DATABASE_HPP

#include <iostream>
#include <string>

#include <ixwebsocket/IXNetSystem.h>
#include <ixwebsocket/IXWebSocket.h>

#include "shared-parent-database.hpp"

class DatabaseClient : public Database {
 private:
  bool running_;
  ix::WebSocket web_socket_;
 public:
  DatabaseClient() : running_(true) {}

  // Main processing
  void init() override; // TODO: FINISH INIT(go over copy and pasted code from docs/usage.md)
  void run() override;
  void cleanup() override;

  // Networking
  void send() override;
  void recv() override;

  // Modifiers
  void doAverage() override;
};

#endif // CLIENT_DATABASE_HPP