#include <sys/ioctl.h>
#include <unistd.h>

#include "terminal.h"

u16 get_term_width(void) {
  struct winsize win;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &win);
  return win.ws_col;
}

u16 get_term_height(void) {
  struct winsize win;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &win);
  return win.ws_row;
}
