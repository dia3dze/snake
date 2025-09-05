#pragma once
#include <raylib.h>
#include<string>
#include<vector>

class Input {
private:
  struct Action {
    std::string actionName;
    std::vector<KeyboardKey> actionKeys;
  };
  std::vector<Action> actions = {
    {"up",    { KEY_W, KEY_UP }},
    {"down",  { KEY_S, KEY_DOWN }},
    {"left",  { KEY_A, KEY_LEFT }},
    {"right", { KEY_D, KEY_RIGHT }}
  };
public:
  bool isActionPressed(const std::string& input);
};
