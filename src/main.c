#define WADDLE_IMPLEMENTATION
#include "waddle.h"

#include <stdio.h>

i32 main(void) {
    wdl_init();
    WDL_Arena* arena = wdl_arena_create();

    wdl_arena_push(arena, wdl_os_get_page_size());

    printf("Waddle template!\n");
    printf("Page size: %u\n", wdl_os_get_page_size());
    printf("Architecture: %lu-bit\n", sizeof(void*) * 8);
    printf("Arena pos: %llu\n", wdl_arena_get_pos(arena));
    printf("Run time: %f\n", wdl_os_get_time());

    wdl_arena_destroy(arena);
    wdl_terminate();
    return 0;
}
