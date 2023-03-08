#ifndef H_PIXEL
#define H_PIXEL

#include <types.h>

#define MAX_CHARS_PER_PIXEL 1

typedef struct {
    u32 glyph[MAX_CHARS_PER_PIXEL];
} Pixel;

#endif // !H_PIXEL
