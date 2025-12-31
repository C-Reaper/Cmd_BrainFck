#include "/home/codeleaded/System/Static/Library/BrainFck.h"

int main() {
    BrainFck bf = BrainFck_New(0xFFFF);
    BrainFck_Src(&bf,"./code/Main.bf");
    BrainFck_Start(&bf);
    BrainFck_Free(&bf);
    return 0;
}