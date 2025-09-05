#include<raylib.h>
#include"../include/window.h"


int main() {
  Window win;

  while( win.running() ) {
    win.refresh();
  }

  win.close();
}
