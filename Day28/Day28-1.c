#include <stdio.h>

int main() {
    int path;
    scanf("%d", &path);

    if (path == 1) {
        printf("Player chooses the Left path.\n");

        int sc;
        scanf("%d", &sc);

        if (sc == 1) {
            printf("Poor choice, Game Over!");
            return 0;
        } 
        else if (sc == 2) {
            printf("Player found a bridge.\n");

            int bridge;
            scanf("%d", &bridge);

            if (bridge == 1) {
                printf("Player crosses the bridge safely.\n");
            } else {
                printf("Poor luck, Game Over!");
                return 0;
            }
        }
    } 
    else if (path == 2) {
        printf("Player chooses the Middle path.\n");

        int answer;
        scanf("%d", &answer);

        if (answer == 582) {
            printf("Player solved the puzzle.\n");
        } else {
            printf("Foolish player, Game Over!");
            return 0;
        }
    } 
    else if (path == 3) {
        printf("Player chooses the Right path.\n");

        int answer;
        scanf("%d", &answer);

        if (answer == 30) {
            printf("Player solved the puzzle.\n");
        } else {
            printf("Foolish player, Game Over!");
            return 0;
        }
    }


    int chest;
    scanf("%d", &chest);

    if (chest == 1) {
        printf("All that glitters is not gold, Game Over!");
    } 
    else if (chest == 2) {
        printf("All your efforts were for nothing, Game Over!");
    } 
    else if (chest == 3) {
        printf("Congratulations!! You won the treasure.");
    }

    return 0;
}
//If-Else_Treasure Hunt