#include "server-database.hpp"
/////
#include <ixwebsocket/IXGetFreePort.h>
#include <ixwebsocket/IXSocketTLSOptions.h>
#include <ixwebsocket/IXWebSocketServer.h>

int main() {
  DatabaseServer sserver;
  sserver.run();
  int port = ix::getFreePort();
  ix::WebSocketServer server(port);
  return 0;
}