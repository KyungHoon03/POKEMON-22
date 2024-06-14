//1) 다음 코드의 빈칸을 완성하여 포켓몬스터 게임을 완성시키시오.

//[힌트]
//1. 문자열 부분이 불가피하게 들어갔습니다.자세한 건 멘토에게 물어보고, 출력은% s를 사용하여 진행해주세요.
//2. random 부분이 들어갔습니다.다들 배우셨으리라 생각하지만, 그냥 지나갔다면 멘토와 함께 상의하여 풀어주시길 바랍니다.
//3. 교재, 강의자료, 구글링 뭐든 됩니다.최대한 열심히 풀어주세요!
//4. 이외에 모르는 것이나 문제의 오류가 있다면 멘토나 저(한태림)에게 문의 바랍니다!

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main()//의문점...mp나 hp가 0이면 기본공격만 가능하고 뭐 이런 식의 뭔가는 없나요...?
{
    printf("=====포켓몬스터 게임을 시작합니다.=====\n");

    char My_pokemon[10] = "피카츄";
    char monster[10] = "파이리";
    int My_pok_HP = 250, My_pok_MP = 200, mon_HP = 250, mon_MP = 200;
    srand(time(NULL));
    //추가 자료형
    int attack, skill, mpoint, apoint, run, runboom;

    // 기본 제공

    printf("야생의 파이리를(을) 만났다.\n\n");
    // 반복문 뭘로해~~~
    while (mon_HP > 0) {

        printf("피카츄의 HP : %d\n", My_pok_HP);
        printf("피카츄의 MP : %d\n\n", My_pok_MP);

        printf("파이리의 HP : %d\n", mon_HP);
        printf("파이리의 MP : %d\n\n", mon_MP);

        // 반복문 시작 피카츄는 뭘?->공격, (도망)->스킬->피해랜덤/(성공실패여부->피해랜덤), 그 외 다시 전으로


        printf("피카츄는(은) 무엇을 할까? \n");
        printf("1, 공격한다.\n2, 도망간다.\n번호를 입력하시오. :");
        scanf("%d", &attack);

        if (attack == 1) {
            printf("\n'공격한다.'를(을) 선택하셨습니다.\n\n공격하실 스킬을 선택하세요.\n1, 기본공격(0mp)\n2, 몸통 박치기(10mp)\n3, 백만볼트(25mp)\n4, 전광석화(35mp)\n번호를 입력하시오. :");
            scanf("%d", &skill); //스킬 선택
            if (skill == 1) {

                mpoint = 0;
                apoint = rand() % 31 + 5;
                mon_HP = mon_HP - apoint;
                My_pok_MP = My_pok_MP - mpoint;

                printf("\n파이리에게 기본공격을 시전했다.\n파이리에게 %d의 피해를 입혔다. \n\n", apoint);
            }
            else if (skill == 2) {

                mpoint = 10;
                apoint = rand() % 65 + 10;
                mon_HP = mon_HP - apoint;
                My_pok_MP = My_pok_MP - mpoint;

                printf("\n파이리에게 몸통 박치기를 시전했다.\n파이리에게 %d의 피해를 입혔다. \n\n", apoint);
            }
            else if (skill == 3) {

                mpoint = 25;
                apoint = rand() % 81 + 15;
                mon_HP = mon_HP - apoint;
                My_pok_MP = My_pok_MP - mpoint;

                printf("\n파이리에게 백만볼트를 시전했다.\n파이리에게 %d의 피해를 입혔다. \n\n", apoint);
            }
            else if (skill == 4) {

                mpoint = 35;
                apoint = rand() % 100 + 30;
                mon_HP = mon_HP - apoint;
                My_pok_MP = My_pok_MP - mpoint;

                printf("\n파이리에게 전광석화를 시전했다.\n파이리에게 %d의 피해를 입혔다. \n\n", apoint);
            }
            else {
                printf("\n해당되는 메뉴가 없습니다.\n다시 선택하세요.\n");
                continue;
            }//피해 랜덤 선택







        }
        else if (attack == 2) {
            printf("'도망간다.'를(을) 선택하셨습니다.\n\n");

            run = rand() % 2 + 1;//성공실패여부
            if (run == 1) {
                printf("도망가는 것에 성공하셨습니다.\n\n");
                break;
            }
            else {
                printf("도망가는 것에 실패하셨습니다.\n도망을 하던 도중 공격을 당했습니다.\n");
                runboom = rand() % 10 + 5;
                My_pok_HP = My_pok_HP - runboom;
                printf("%d의 데미지를 받아 HP가 %d가 되었습니다.\n\n", runboom, My_pok_HP);
            }



        }
        else {
            printf("\n해당되는 메뉴가 없습니다.\n다시 선택하세요.\n\n");
            continue;
        }
    }
    if (mon_HP <= 0) {
        //반복문 끝났다고 가정
        printf("야생의 파이리를(을) 물리쳤다!.\n\n");
    }

    printf("\n게임을 종료하려면 Enter 키를 눌러주세요.\n");
    char end_key;
    getchar();
    scanf("%c", &end_key);

    return 0;
}