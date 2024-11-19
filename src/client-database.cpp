#include "client-database.hpp"

/**********************************************************************
*************************** Main processing ***************************
**********************************************************************/

/**
 * @brief Initialize connection to server
 */
void DatabaseClient::init() {
  ix::initNetSystem();

  std::string url = "ws://localhost:8080/";
  web_socket_.setUrl(url);

  // Optional heart beat, sent every 45 seconds when there is not any traffic
  // to make sure that load balancers do not kill an idle connection.
  web_socket_.setPingInterval(45);

  // Per message deflate connection is enabled by default. You can tweak its parameters or disable it
  web_socket_.disablePerMessageDeflate();

  // Setup a callback to be fired when a message or an event (open, close, error) is received
  web_socket_.setOnMessageCallback([](const ix::WebSocketMessagePtr& msg)
    {
        if (msg->type == ix::WebSocketMessageType::Message)
        {
            std::cout << msg->str << std::endl;
        }
    }
);
}

/**
 * @brief Program loop
 */
void DatabaseClient::run() {
  while(running_) {

  }
}

/**
 * @brief Cleanup processes
 */
void DatabaseClient::cleanup() {
  ix::uninitNetSystem();
}

/**********************************************************************
***************************** Networking ******************************
**********************************************************************/

void DatabaseClient::send() {

}

void DatabaseClient::recv() {

}

/**********************************************************************
****************************** Modifiers ******************************
**********************************************************************/