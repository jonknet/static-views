//          Copyright Tom Westerhout 2017-2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include <boost/static_views/drop.hpp>

int main()
{
    int data[] = {1, 2, 3, 4, 5};
    // Pass a type that does not model the View concept
    auto const view = boost::static_views::drop_exactly(2u)(data);
}
