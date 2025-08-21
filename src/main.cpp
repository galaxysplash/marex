#include <llvm/IR/IRBuilder.h>
#include <marex/core/Core.h>

#include <cstdint>

auto main(int32_t const argc, char const *argv[]) noexcept -> int32_t {
  Core::hello_world();

  return 0;
}
