#ifndef CLIENT_DATABASE_HPP
#define CLIENT_DATABASE_HPP

class DatabaseClient {
 private:
  bool running_ = true;
 public:
  void run();
};

#endif // CLIENT_DATABASE_HPP