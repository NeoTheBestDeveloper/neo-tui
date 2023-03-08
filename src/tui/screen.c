#include <stddef.h>
#include <stdlib.h>
#include <stdnoreturn.h>

#include "../os/terminal.h"
#include "_screen.h"
#include "screen.h"

__attribute__((used)) __attribute__((retain))
__attribute__((section("screen_section")))
__attribute__((aligned(__alignof__(Screen)))) static Screen _screen;

Screen *get_screen(void) { return &__start_screen_section; }

void screen_init(void) {
    Screen *screen = get_screen();

    screen->heigth = get_term_height();
    screen->width = get_term_width();

    screen->buffer = NULL;
    screen->pixels = NULL;
}

noreturn void screen_end(void) {
    Screen *screen = get_screen();

    if (screen->buffer) {
        free(screen->buffer); // FIXME: use more specific function
                              // (sreen_buffer_free), because buffer may be
                              // contained in several ways.
    }

    if (screen->pixels) {
        free(screen->pixels);
    }

    exit(EXIT_SUCCESS);
}
