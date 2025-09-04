#include <matchit.h>

#include <cstdio>

#include "token/Token.h"

using matchit::_;
using matchit::as;
using matchit::match;
using matchit::pattern;

auto main(const int argc, const char *const *const argv) noexcept -> int {
  TokenList tokens;

  for (const Token &token : tokens) {
    match(token)( //
        pattern | as<literals::f32>(_) = [&]() -> void {

        },
        pattern | _ = [&]() -> void {

        } //
    );
  }
}