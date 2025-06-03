/* 파일명: assign18.c
        * 내용: 해당 문제 기술
        * 작성자: 홍길동
        * 날짜: 2025.MM.DD.
        * 버전: v1.0
        */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct song {
    char name[20];
    char artist[20];
    char genre[20];
    int playtime;
} SONG;

SONG songs[10] = {
        {"thank u, next", "Ariana Grande", "pop", 208},
        {"Attention", "Charlie Puth", "pop", 218},
        {"별 보러 가자", "백예린", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"아낙네", "MINO", "hip-hop", 241},
        {"봄날", "방탄소년단", "hip-hop", 209},
        {"Awake", "방탄소년단", "ballad", 226},
        {"봄날", "방탄소년단", "hip-hop", 274},
        {"별 보러 가자", "백예린", "ballad", 316},
        {"Awake", "방탄소년단", "ballad", 226}
};              //구조체 배열

void assignment18(SONG songs[]) {
    SONG* playlist[5] = { NULL };
    int number = 0;
    int totaltime = 0;
    int count = 0;

    while (1) {
        printf("플레이리스트에 추가할 곡 번호? ");
        scanf("%d", &number);

        if (number < 0 || number > 8) {
            printf("잘못된 곡 번호입니다.\n");
            continue;
        }

        playlist[count] = &songs[number - 1];   //배열 0부터 시작 
        totaltime += songs[number - 1].playtime;    //songs는 구조체 배열, 인덱스 필수 표시
        count++;

        printf("<< 플레이리스트 >>\n");

        for (int i = 0; i < count; i++)
            printf("%s      %s      %s      %d\n",
                playlist[i]->name, playlist[i]->artist, playlist[i]->genre, playlist[i]->playtime);

        printf("총 재생시간: %d\n", totaltime);

        if (number == 0)
            break;
    }
}

int main() {
    assignment18(songs);
}