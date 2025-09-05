#include<raylib.h>
#include<string>
#include"../include/input.h"

bool Input::isActionDown(const std::string& input) {
  for (auto& action : actions) {
    if (action.actionName == input) {
      for (auto key : action.actionKeys) {
        if (IsKeyDown(key)) return true;
      }
    }
  }
  return false;
}

std::string Input::getCurrentAction() {
    for (auto& action : actions) {
        for (auto key : action.actionKeys) {
            if (IsKeyDown(key)) {
                return action.actionName;
            }
        }
    }
    return "";
}
