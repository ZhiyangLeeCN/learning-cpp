#include <iostream>

int main()
{
    int curval = 0;
    int sum = 0;
    int cnt = 0;

    while(std::cin >>  curval) {

        sum += curval;
        std::cout << "curval:" << curval << ", sum:" << sum << std::endl;
        cnt++;

    }

    std::cout << "read count:" << cnt << std::endl;

}