#include <list>
#include <print>
#include <type_traits>
#include <variant>
#include <matchit/>
#include "token/Token.h"

auto main(const int argc, const char *const *const argv) noexcept -> int {
  TokenList tokens;

  for (const auto &token : tokens) {
    match(tokens)(

    )
        [&]<typename T>(T &&value) -> void {
          if constexpr (std::is_same_v<T, int>) {
            std::println("int: {}", value);
          }
          if constexpr (std::is_same_v<T, double>) {
            std::println("double: {}", value);
          }
          if constexpr (std::is_same_v<T, KeywordKind>) {
          }
        },
        token);
  }
}