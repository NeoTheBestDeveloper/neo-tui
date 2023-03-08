#ifndef H_DIE
#define H_DIE

#include <stdnoreturn.h>
#include <types.h>

noreturn void die(const char *msg, i32 error_code);

#endif // !H_DIE
