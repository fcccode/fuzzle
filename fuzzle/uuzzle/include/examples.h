#include <puzzle.h>

#ifndef __EXAMPLES_H__
#define __EXAMPLES_H__

/* Prototypes */
static void example000_emulator_hook_code(uc_engine *uc,
                                          uint64_t address,
                                          uint32_t size,
                                          void *usr_data);
bool init_capstone(pzl_ctx_t *context);

#endif
