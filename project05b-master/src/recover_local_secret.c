#include "recover_local_secret.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "util.h"

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
    // TODO: Implement me using force_read().  I am a very short function.
}

int main() {
    page_t *pages = init_pages();

    /* TODO: Copy me from the previous stage and edit me
     * to loop over SECRET_LENGTH characters. */

    printf("\n");
    free(pages);
}
