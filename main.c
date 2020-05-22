#include <stdio.h>
#include "defs.h"
#include "init.c"
#include "bitboards.c"

int main() {

    AllInit();

    U64 playBitBoard = 0;

    playBitBoard |= (1 << SQ64(D2));
    playBitBoard |= (1 << SQ64(D3));
    playBitBoard |= (1 << SQ64(D4));

    int sq64 = 0;
    while(playBitBoard) {
        sq64 = POP(&playBitBoard);
        printf("Popped: %d\n", sq64);
        PrintBitBoard(playBitBoard);
    }



    return 0;
}
