#ifndef NETWORKLIB_DETAIL_MAKE_CONNECTION_HPP
#define NETWORKLIB_DETAIL_MAKE_CONNECTION_HPP
#include <memory>

#include <networklib/detail/socket_stream.hpp>

namespace network {
class Request;
namespace detail {

auto make_connection(const Request& r) -> std::unique_ptr<Socket_stream>;

void wait_();

}  // namespace detail
}  // namespace network
#endif  // NETWORKLIB_DETAIL_MAKE_CONNECTION_HPP
