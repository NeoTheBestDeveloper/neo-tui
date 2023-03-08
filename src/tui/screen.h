#ifndef H_SCREEN
#define H_SCREEN

#include <types.h>

#include "dom.h"
#include "src/tui/pixel.h"

typedef struct {
    void *buffer;
    Pixel *pixels;
    Dom dom;
    u16 width, heigth;
} Screen;

void screen_init(void);
void screen_end(void);

#endif // H_SCREEN
