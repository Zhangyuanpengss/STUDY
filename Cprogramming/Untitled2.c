#include <stdio.h>
#include <string.h>
typedef struct myCard
{
    char *face;
    char *suit;
} Card_c;
int main(void)
{
    Card_c aCard;
    Card_c *cardPtr;
    aCard.face = "Ace";
    aCard.suit = "Spades";
    cardPtr = &aCard;
    printf("%s of %s\n", aCard.face, aCard.suit);
    printf("%s of %s\n", cardPtr->face, cardPtr->suit);
    return 0;
}
