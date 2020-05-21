#include <stdio.h>
#include "defs.h"
#include "init.c"
#include "bitboards.c"

int main() {

    AllInit();

    U64 playBitBoard = 0ULL;
    printf("Start:\n");
    PrintBitBoard(playBitBoard);


    playBitBoard |= (1ULL << SQ64(D2));
    printf("D2 added: \n");
    PrintBitBoard(playBitBoard);

    playBitBoard |= (1ULL << SQ64(G2));
    printf("D2 added: \n");
    PrintBitBoard(playBitBoard);

    return 0;
}
