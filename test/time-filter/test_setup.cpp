
#include "test.hpp" // IWYU pragma: keep

#include "command_time_filter.hpp"

TEST_CASE("time-filter") {

    CommandTimeFilter cmd;

    SECTION("no parameters") {
        REQUIRE_THROWS_AS(cmd.setup({}), const argument_error&);
    }

}

