#ifndef H__SCREEN
#define H__SCREEN

#include "screen.h"

extern Screen __start_screen_section;
extern Screen __stop_screen_section;

Screen *get_screen(void);

#endif // !H__SCREEN
