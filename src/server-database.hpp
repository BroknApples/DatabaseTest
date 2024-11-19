#ifndef SERVER_DATABASE_HPP
#define SERVER_DATABASE_HPP

#include <ixwebsocket/IXNetSystem.h>
#include <ixwebsocket/IXHttpServer.h>

#include "shared-parent-database.hpp"

class DatabaseServer : public Database {
 private:
  bool running_;
 public:
  DatabaseServer() : running_(true) {}

  // Main processing
  void init() override;
  void run() override;
  void cleanup() override;

  // Networking
  void send() override;
  void recv() override;

  // Modifiers
  void doAverage() override;
};

#endif // SERVER_DATABASE_HPP