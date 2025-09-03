// declarations
#include <cstdio>
#include <list>
#include <matchit.h>
#include <print>
#include <variant>

// imports
using matchit::_;
using matchit::as;
using matchit::match;
using matchit::pattern;

enum class KeywordKind {
  And,
  Or,
  Not,

  Equals,
  NotEquals,

  Greater,
  Smaller,

  If,
  Colon,

  Assignment,

};

using Token = std::variant<double, int, KeywordKind>;

auto main(const int argc, const char *const *const argv) noexcept -> int {
  std::list<Token> tokens;

  const auto f = [&]<typename T>() {};

  for (const auto &token : tokens) {
    std::visit(
        [&]<typename T>(T &&value) {
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