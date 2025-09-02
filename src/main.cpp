#include <cstdio>
#include <iostream>
#include <list>
#include <matchit.h>
#include <type_traits>
#include <variant>

using matchit::_;
using matchit::as;
using matchit::match;
using matchit::pattern;

enum class KeywordKind {

};

using Token = std::variant<double, int, KeywordKind>;

auto main(const int argc, const char *const *const argv) noexcept -> int {
  std::list<Token> tokens;

  for (const auto &token : tokens) {
    match(token)(
        pattern | as<KeywordKind>(_) = [&]() -> void { printf("test"); },
        pattern | as<double>(_) = [&]() -> void {  });
  }
}