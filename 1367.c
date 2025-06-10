#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMS 26

typedef struct {
    int penalty;
    int solved;
} Problem;

int main() {
    while (1) {
        int submissionCount;
        scanf("%d", &submissionCount);
        if (submissionCount == 0)
            break;

        Problem problems[MAX_PROBLEMS];
        for (int i = 0; i < MAX_PROBLEMS; i++) {
            problems[i].penalty = 0;
            problems[i].solved = 0;
        }

        int totalTime = 0;
        int totalSolved = 0;

        for (int i = 0; i < submissionCount; i++) {
            char problemID;
            int time;
            char result[10];

            scanf(" %c %d %s", &problemID, &time, result);
            int index = problemID - 'A';

            if (strcmp(result, "incorrect") == 0 && problems[index].solved == 0) {
                problems[index].penalty += 20;
            } else if (strcmp(result, "correct") == 0 && problems[index].solved == 0) {
                problems[index].solved = 1;
                totalSolved++;
                totalTime += time + problems[index].penalty;
            }
        }

        printf("%d %d\n", totalSolved, totalTime);
    }

    return 0;
}