#include "recover_protected_local_secret.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define __USE_GNU
#include <signal.h>

#include "util.h"

extern uint8_t label[];

const size_t MIN_CHOICE = 'A' - 1;
const size_t MAX_CHOICE = 'Z' + 1;
const size_t SECRET_LENGTH = 5;

static inline page_t *init_pages(void) {
    page_t *pages = calloc(UINT8_MAX + 1, PAGE_SIZE);
    assert(pages != NULL);
    return pages;
}

static inline void flush_all_pages(page_t *pages) {
    // TODO: Copy me from the previous stage
}

static inline size_t guess_accessed_page(page_t *pages) {
    // TODO: Copy me from the previous stage
    return 0;
}

static inline void do_access(page_t *pages, size_t secret_index) {
    // TODO: Copy me from the previous stage.
    //       Don't forget to call cache_secret() to ensure the secret is in memory.
}

// TODO: Implement a SIGSEGV handler

int main() {
    // TODO: Install your SIGSEGV handler

    /* TODO: Copy the code from the previous stage and edit the following:
     *   1. Add `asm volatile("label:")` where you want the SIGSEGV handler to return to.
     *   2. For each letter, it might take more than one attempt to get a cache hit.
     *      Throw all the logic in an inner loop. */
}
