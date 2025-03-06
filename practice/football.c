/*
1. ดูจากคะแนนที่ได้ ทีมใดได้คะแนนมากกว่าจะอยู่ในอันดับที่ดีกว่า
2. หากเกณฑ์ในข้อ 1 ยังเท่ากัน ให้ดูจากจำนวนประตูที่ยิงได้ลบด้วยจำนวนประตูที่ถูกยิง ทีมใดได้มากกว่าก็จะ
อยู่ในอันดับที่ดีกว่า
3. หากเกณฑ์ในข้อ 2 ยังเท่ากัน ดูจากจำนวนประตูที่ยิงได้ ทีมใดได้มากกว่าก็จะอยู่ในอันดับที่ดีกว่า

Denmark
Netherlands
Cameroon
Japan
0 0 2 1
2 0 2 1
1 1 0 0
3 0 1 0

Netherlands 9
Japan 6
Denmark 3
Cameroon 0

https://programming.in.th/tasks/0028
*/

#include <stdio.h>
#include <stdlib.h>

#define TEAM_AMOUNT 4

int main() {

    char team[TEAM_AMOUNT][50];
    int sscore[TEAM_AMOUNT] = {0};
    char sort_team[TEAM_AMOUNT][50];
    int *sort_sscore = malloc(sizeof(int) * TEAM_AMOUNT);
    int **score = malloc(sizeof(int*) * TEAM_AMOUNT);
    for(int i = 0; i < TEAM_AMOUNT; i++) {
        scanf("%s", team[i]);
    }
    for(int i = 0; i < TEAM_AMOUNT; i++) {
        score[i] = malloc(sizeof(int) * TEAM_AMOUNT);
        scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
    }

    for(int i = 0; i < TEAM_AMOUNT; i++) {
        for(int j = 0; j < TEAM_AMOUNT; j++) {
            sscore[i] += score[i][j];
        }
    }

    //how wa
    

    for(int i = 0; i < TEAM_AMOUNT; i++) {
        printf("%s %d\n", team[i], sscore[i]);
    }

    for(int i = 0; i < TEAM_AMOUNT; i++) 
        free(score[i]);
    free(score);
    return 0;
}