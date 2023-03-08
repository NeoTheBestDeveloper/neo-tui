#include <stdlib.h>

#include "neotui.h"
#include "tui/screen.h"

void nt_init(void) { screen_init(); }
void nt_end(void) { atexit(screen_end); }
