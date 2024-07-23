#include <stdio.h>

#define FRAMES 10

int main() {
    int score[FRAMES + 2] = {0}; // 각 프레임의 점수를 저장할 배열 (+2는 보너스 처리를 위해)
    int rollIndex = 0;           // 현재 굴리는 공의 인덱스
    int totalScore = 0;          // 총 점수

    printf("볼링 게임을 시작합니다.\n");

    // 각 프레임에서의 점수 입력 및 처리
    for (int frame = 1; frame <= FRAMES; frame++) {
        int roll1, roll2;

        // 첫 번째 공 굴리기
        printf("프레임 %d 첫 번째 공의 핀 수를 입력하세요: ", frame);
        scanf("%d", &roll1);

        // 유효한 핀 수 입력 확인
        while (roll1 < 0 || roll1 > 10) {
            printf("올바른 핀 수를 입력하세요 (0에서 10 사이): ");
            scanf("%d", &roll1);
        }

        score[rollIndex++] = roll1;

        // 스트라이크 처리
        if (roll1 == 10) {
            printf("스트라이크!\n");
            continue;
        }

        // 두 번째 공 굴리기
        printf("프레임 %d 두 번째 공의 핀 수를 입력하세요: ", frame);
        scanf("%d", &roll2);

        // 유효한 핀 수 입력 확인
        while (roll2 < 0 || roll2 > (10 - roll1)) {
            printf("올바른 핀 수를 입력하세요 (0에서 %d 사이): ", (10 - roll1));
            scanf("%d", &roll2);
        }

        score[rollIndex++] = roll2;

        // 스페어 처리
        if (roll1 + roll2 == 10) {
            printf("스페어!\n");
        }
    }

    // 총 점수 계산
    rollIndex = 0;
    for (int frame = 1; frame <= FRAMES; frame++) {
        if (score[rollIndex] == 10) {  // 스트라이크
            totalScore += 10 + score[rollIndex + 1] + score[rollIndex + 2];
            rollIndex += 1;
        } else if (score[rollIndex] + score[rollIndex + 1] == 10) {  // 스페어
            totalScore += 10 + score[rollIndex + 2];
            rollIndex += 2;
        } else {  // 일반 점수
            totalScore += score[rollIndex] + score[rollIndex + 1];
            rollIndex += 2;
        }
    }

    // 결과 출력
    printf("볼링 게임의 총 점수는 %d점 입니다.\n", totalScore);

    return 0;
}
