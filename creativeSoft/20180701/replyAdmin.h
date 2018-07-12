#include <iostream>
#include <string>
#define NUM_OF_CHAT 200
using namepsace std;
Class ReplyAdmin{
 private:
  string *chats;
 public:
  ReplyAdmin();
  ~ReplyAdmin();
  int getChatCount();
  bool addChat(string _chat);
  bool removeChat(int _index);
  bool removeChat(int *_index);
  bool removeChat(int _start, int_end);
  void printChat();


}
