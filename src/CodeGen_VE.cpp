#include "CodeGen_VE.h"
#include "LLVM_Headers.h"
#include "Util.h"

namespace Halide {
namespace Internal {

using std::string;

using namespace llvm;

CodeGen_VE::CodeGen_VE(Target t)
    : CodeGen_Posix(t) {
#if !defined(WITH_VE)
    user_error << "llvm build not configured with VE target enabled.\n";
#endif
    user_assert(llvm_VE_enabled) << "llvm build not configured with VE target enabled.\n";
}

string CodeGen_VE::mcpu() const {
    if (target.bits == 32) {
        return "";
    } else {
        return "";
    }
}

string CodeGen_VE::mattrs() const {
    if (target.bits == 32) {
        return "";
    } else {
        return "";
    }
}

bool CodeGen_VE::use_soft_float_abi() const {
    return false;
}

int CodeGen_VE::native_vector_bits() const {
    return 16384;
}

}  // namespace Internal
}  // namespace Halide
