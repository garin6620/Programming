/* ���ϸ�: assign18.c
        * ����: �ش� ���� ���
        * �ۼ���: ȫ�浿
        * ��¥: 2025.MM.DD.
        * ����: v1.0
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
        {"�� ���� ����", "�鿹��", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"�Ƴ���", "MINO", "hip-hop", 241},
        {"����", "��ź�ҳ��", "hip-hop", 209},
        {"Awake", "��ź�ҳ��", "ballad", 226},
        {"����", "��ź�ҳ��", "hip-hop", 274},
        {"�� ���� ����", "�鿹��", "ballad", 316},
        {"Awake", "��ź�ҳ��", "ballad", 226}
};              //����ü �迭

void assignment18(SONG songs[]) {
    SONG* playlist[5] = { NULL };
    int number = 0;
    int totaltime = 0;
    int count = 0;

    while (1) {
        printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
        scanf("%d", &number);

        if (number < 0 || number > 8) {
            printf("�߸��� �� ��ȣ�Դϴ�.\n");
            continue;
        }

        playlist[count] = &songs[number - 1];   //�迭 0���� ���� 
        totaltime += songs[number - 1].playtime;    //songs�� ����ü �迭, �ε��� �ʼ� ǥ��
        count++;

        printf("<< �÷��̸���Ʈ >>\n");

        for (int i = 0; i < count; i++)
            printf("%s      %s      %s      %d\n",
                playlist[i]->name, playlist[i]->artist, playlist[i]->genre, playlist[i]->playtime);

        printf("�� ����ð�: %d\n", totaltime);

        if (number == 0)
            break;
    }
}

int main() {
    assignment18(songs);
}