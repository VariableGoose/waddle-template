#define WADDLE_IMPLEMENTATION
#include "waddle.h"

i32 main(void) {
    wdl_init();
    WDL_Arena* arena = wdl_arena_create();

    wdl_arena_push(arena, wdl_os_get_page_size());

    wdl_info("Waddle template!");
    wdl_info("Page size: %u", wdl_os_get_page_size());
    wdl_info("Architecture: %lu-bit", sizeof(void*) * 8);
    wdl_info("Arena pos: %llu", wdl_arena_get_pos(arena));
    wdl_info("Run time: %f", wdl_os_get_time());

    wdl_arena_destroy(arena);
    wdl_terminate();
    return 0;
}
