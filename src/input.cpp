#include<raylib.h>
#include<string>
#include"../include/input.h"

bool Input::isActionPressed(const std::string& input) {
  for (auto& action : actions) {
    if (action.actionName == input) {
      for (auto key : action.actionKeys) {
        if (IsKeyPressed(key)) return true;
      }
    }
  }
  return false;
}
