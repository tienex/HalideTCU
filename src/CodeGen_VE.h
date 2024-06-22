#ifndef HALIDE_CODEGEN_VE_H
#define HALIDE_CODEGEN_VE_H

/** \file
 * Defines the code-generator for producing VE machine code.
 */

#include "CodeGen_Posix.h"

namespace Halide {
namespace Internal {

/** A code generator that emits VE code from a given Halide stmt. */
class CodeGen_VE : public CodeGen_Posix {
public:
    /** Create a VE code generator. Processor features can be
     * enabled using the appropriate flags in the target struct. */
    CodeGen_VE(Target);

    static void test();

protected:
    using CodeGen_Posix::visit;

    std::string mcpu() const override;
    std::string mattrs() const override;
    bool use_soft_float_abi() const override;
    int native_vector_bits() const override;
};

}  // namespace Internal
}  // namespace Halide

#endif
