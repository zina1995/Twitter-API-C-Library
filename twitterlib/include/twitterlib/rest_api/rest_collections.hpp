#ifndef TWITTERLIB_REST_API_REST_COLLECTIONS_HPP
#define TWITTERLIB_REST_API_REST_COLLECTIONS_HPP
#include <cstdint>
#include <string>

#include <networklib/oauth/credentials.hpp>
#include <networklib/response.hpp>

namespace twitter {

// TODO: Change return type to Colletion, that wraps a vector<Tweet> and
// includes the description data as well.
[[nodiscard]] auto get_collection(network::Credentials const& keys,
                                  std::string const& id,
                                  int count        = -1,
                                  int max_position = -1,
                                  int min_position = -1) -> network::Response;

[[nodiscard]] auto find_collections(network::Credentials const& keys,
                                    std::string const& screen_name,
                                    std::int64_t user_id  = -1,
                                    std::int64_t tweet_id = -1,
                                    int count = -1) -> network::Response;

[[nodiscard]] auto get_collection_info(network::Credentials const& keys,
                                       std::string const& id)
    -> network::Response;

}  // namespace twitter
#endif  // TWITTERLIB_REST_API_REST_COLLECTIONS_HPP
