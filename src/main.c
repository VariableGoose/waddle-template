#define WADDLE_IMPLEMENTATION
#include "waddle.h"

#include <stdio.h>

i32 main(void) {
    wdl_init();
    wdl_arena_t* arena = arena_create();

    arena_push(arena, wdl_os_get_page_size());

    printf("Waddle template!\n");
    printf("Page size: %u\n", wdl_os_get_page_size());
    printf("Architecture: %lu-bit\n", sizeof(void*) * 8);
    printf("Arena pos: %llu\n", arena_get_pos(arena));
    printf("Run time: %f\n", wdl_os_get_time());

    arena_destroy(arena);
    wdl_terminate();
    return 0;
}
