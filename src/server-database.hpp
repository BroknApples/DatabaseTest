#ifndef SERVER_DATABASE_HPP
#define SERVER_DATABASE_HPP

class DatabaseServer {
 private:
  bool running_ = true;
 public:
  void run();
};

#endif // SERVER_DATABASE_HPP