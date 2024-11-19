#ifndef SHARED_PARENT_DATABASE_HPP
#define SHARED_PARENT_DATABASE_HPP

class Database {
 private:

 public:
  // Main processing
  virtual void init() {}
  virtual void run() {}
  virtual void cleanup() {}

  // Networking
  virtual void send() {}
  virtual void recv() {}

  // Modifiers
  virtual void doAverage() {}
};

#endif // SHARED_PARENT_DATABASE_HPP