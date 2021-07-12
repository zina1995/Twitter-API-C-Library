#ifndef TWITTERLIB_DETAIL_TO_STRING_HPP
#define TWITTERLIB_DETAIL_TO_STRING_HPP
#include <ios>
#include <sstream>
#include <string>

namespace twitter {
namespace detail {

template <typename T>
auto to_string(const T& thing) -> std::string
{
    std::stringstream ss;
    ss << std::boolalpha << thing;
    return ss.str();
}

}  // namespace detail
}  // namespace twitter
#endif  // TWITTERLIB_DETAIL_TO_STRING_HPP
