//
// Copyright (c) 2021 Vinnie Falco (vinnie.falco@gmail.com)
// Copyright (c) 2022 Alan de Freitas (alandefreitas@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/alandefreitas/socks_proto
//

#ifndef BOOST_SOCKS_DETAIL_VERSION_HPP
#define BOOST_SOCKS_DETAIL_VERSION_HPP

#include <boost/socks/detail/config.hpp>
#include <boost/socks/string_view.hpp>
#include <iosfwd>

namespace boost {
namespace socks {
namespace detail {

// Constants representing SOCKS versions.
//
//  Only versions 4 and 5 are recognized in requests and
//  replies.
//
// https://datatracker.ietf.org/doc/html/rfc1928#section-4
// https://www.openssh.com/txt/socks4.protocol
enum class version : unsigned char
{
    // SOCKS Protocol Version 4
    socks_4  = 0x04,
    // SOCKS Protocol Version 5
    socks_5  = 0x05
};

// Return the serialized string representing the SOCKS version
BOOST_SOCKS_DECL
string_view
to_string(version v) noexcept;

// Format the version to an output stream.
BOOST_SOCKS_DECL
std::ostream&
operator<<(std::ostream& os, version v);

} // detail
} // socks
} // boost

#endif
