//
// Copyright (c) 2022 Alan de Freitas (alandefreitas@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/alandefreitas/socks_proto
//

#ifndef BOOST_SOCKS_DETAIL_ADDRESS_TYPE_HPP
#define BOOST_SOCKS_DETAIL_ADDRESS_TYPE_HPP

#include <boost/socks/detail/config.hpp>
#include <boost/socks/string_view.hpp>
#include <iosfwd>

namespace boost {
namespace socks {
namespace detail {

// Constants representing SOCKS address types.
enum class address_type : unsigned char
{
    // IP V4 address
    ip_v4       = 0x01,

    // Domain name
    domain_name = 0x03,

    // IP V6 address
    ip_v6       = 0x04,

    // Unknown address type
    unknown     = 0xFF
};

// Converts an integer to a known reply code.
//
// If the integer does not match a known reply code,
// address_type::unknown is returned.
BOOST_SOCKS_DECL
address_type
to_address_type(unsigned v);

} // detail
} // socks
} // boost

#endif
