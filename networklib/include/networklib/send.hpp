#ifndef NETWORKLIB_SEND_HPP
#define NETWORKLIB_SEND_HPP
#include <networklib/response.hpp>

namespace network {
class Request;

/// Creates a connection and sends a fully formed response to the endpoint.
/// \returns HTTP response from the endpoint.
auto send(const Request& request) -> Response;

}  // namespace network
#endif  // NETWORKLIB_SEND_HPP
