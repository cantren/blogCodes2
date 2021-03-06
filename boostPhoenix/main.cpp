#include <testFunction/testHelper.hpp>

#include <functional>
#include <string>
#include <vector>

#include "find_if.hpp"
#include "if.hpp"

int main()
{
    std::vector<std::string> const Names{"phoenix_find_if", "phoenix_if"};
    std::vector<std::function<void()>> funcs{test_find_if, test_if};

    register_test_case(Names, funcs);

    return 0;
}

