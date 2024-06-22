#include "CodeGen_LoongArch.h"
#include "LLVM_Headers.h"
#include "Util.h"

namespace Halide {
namespace Internal {

using std::string;

using namespace llvm;

CodeGen_LoongArch::CodeGen_LoongArch(Target t)
    : CodeGen_Posix(t) {
#if !defined(WITH_LOONGARCH)
    user_error << "llvm build not configured with LoongArch target enabled.\n";
#endif
    user_assert(llvm_LoongArch_enabled) << "llvm build not configured with LoongArch target enabled.\n";
}

string CodeGen_LoongArch::mcpu() const {
    if (target.bits == 32) {
        return "";
    } else {
        return "";
    }
}

string CodeGen_LoongArch::mattrs() const {
    if (target.bits == 32) {
        return "";
    } else {
        return "";
    }
}

bool CodeGen_LoongArch::use_soft_float_abi() const {
    return false;
}

int CodeGen_LoongArch::native_vector_bits() const {
    return 256;
}

}  // namespace Internal
}  // namespace Halide
