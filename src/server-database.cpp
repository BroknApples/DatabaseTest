#include "server-database.hpp"

/**
 * @brief Initialize connection to server
 */
void DatabaseServer::init() {
  ix::initNetSystem();
}

/**
 * @brief Program loop
 */
void DatabaseServer::run() {
  while(running_) {

  }
}

/**
 * @brief Cleanup processes
 */
void DatabaseServer::cleanup() {
  ix::uninitNetSystem();
}

/**********************************************************************
***************************** Networking ******************************
**********************************************************************/

void DatabaseServer::send() {

}

void DatabaseServer::recv() {

}

/**********************************************************************
****************************** Modifiers ******************************
**********************************************************************/