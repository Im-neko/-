#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> aa = {
        "┏┓┏┓┏┓┏┓ ",
        "┏┛┃┃┏┛┃┃ ",
        "┗┛┗┛┗┛┗┛ ",
        "",
        "謹┃賀┃新┃年┃",
        "━ ┛━ ┛━ ┛━ ┛"
    };

    for (std::string line : aa) {
        std::cout << line <<'\n';
    }

    return 0;
}
