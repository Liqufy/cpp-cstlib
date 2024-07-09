#include <Windows.h>
#include <cstdlib>

int main() {
    const char* cmd1 = "start firefox https://www.youtube.com/";
    const char* cmd2 = "start firefox https://google.com/";
    const char* cmd3 = "start firefox https://www.amazon.com.tr/";

    system(cmd1);
    Sleep(10);
    system(cmd2);
    Sleep(10);
    system(cmd3);

    return 0;
}
