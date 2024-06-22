#include "HalideRuntime.h"

namespace Halide { namespace Runtime { namespace Internal {

// This is unused and expected to be optimized away; it exists solely to ensure
// that the halide_filter_metadata_t type is in the runtime module, so that
// Codegen_LLVM can access its description.
WEAK const char * unused_function_to_get_halide_filter_metadata_t_declared(halide_filter_metadata_t *m) {
    volatile const char **namep = (volatile const char **)(uintptr_t)(&m->name);
    asm volatile ("":::);
    *namep = *namep;
    asm volatile ("":::);
    return (const char *)(uintptr_t)*namep;
}
WEAK halide_type_t *unused_function_to_get_halide_filter_argument_t_declared(halide_filter_argument_t *a) {
    volatile halide_type_t *typep = &(a->type);
    asm volatile ("":::);
    typep->lanes = typep->lanes;
    asm volatile ("":::);
    return (halide_type_t *)(uintptr_t)typep;
}
WEAK const halide_type_t unused_function_to_get_halide_type_t_declared() { return halide_type_t(); }
WEAK halide_scalar_value_t unused_function_to_get_halide_scalar_value_t_declared() { return halide_scalar_value_t(); }
WEAK const halide_semaphore_t unused_function_to_get_halide_semaphore_t_declared() { return halide_semaphore_t(); }

} } }

