#pragma once

#include <cstddef>
#include <list>
#include <string>
#include <string_view>
#include <variant>

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

using Identifier = std::string;

namespace literals {
// has to be owner
using str = std::string;

using f32 = float;
using f64 = double;

using i8 = char;
using i16 = short;
using i32 = int;
using i64 = long;

using u8 = unsigned char;
using u16 = unsigned short;
using u32 = unsigned int;
using u64 = unsigned long;

using usize = std::size_t;
} // namespace literals

using Token = std::variant<
#pragma region LITERALS
    // str
    literals::str,
    // floats
    literals::f32, literals::f64,
    // integers
    literals::i8, literals::i16, literals::i32, literals::i64,
    // size
    literals::usize,
#pragma endregion LITERALS

    // keyword
    KeywordKind,
    // identifier
    Identifier>;

using TokenList = std::list<Token>;
