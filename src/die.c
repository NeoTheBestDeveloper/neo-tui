#include <die.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "src/os/terminal.h"

noreturn void die(const char *msg, i32 error_code) {
    clear_screen();
    write(STDERR_FILENO, msg, strlen(msg));
    exit(error_code);
}
