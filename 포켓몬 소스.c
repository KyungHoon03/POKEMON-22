//1) ���� �ڵ��� ��ĭ�� �ϼ��Ͽ� ���ϸ��� ������ �ϼ���Ű�ÿ�.

//[��Ʈ]
//1. ���ڿ� �κ��� �Ұ����ϰ� �����ϴ�.�ڼ��� �� ���信�� �����, �����% s�� ����Ͽ� �������ּ���.
//2. random �κ��� �����ϴ�.�ٵ� ���������� ����������, �׳� �������ٸ� ����� �Բ� �����Ͽ� Ǯ���ֽñ� �ٶ��ϴ�.
//3. ����, �����ڷ�, ���۸� ���� �˴ϴ�.�ִ��� ������ Ǯ���ּ���!
//4. �̿ܿ� �𸣴� ���̳� ������ ������ �ִٸ� ���䳪 ��(���¸�)���� ���� �ٶ��ϴ�!

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main()//�ǹ���...mp�� hp�� 0�̸� �⺻���ݸ� �����ϰ� �� �̷� ���� ������ ������...?
{
    printf("=====���ϸ��� ������ �����մϴ�.=====\n");

    char My_pokemon[10] = "��ī��";
    char monster[10] = "���̸�";
    int My_pok_HP = 250, My_pok_MP = 200, mon_HP = 250, mon_MP = 200;
    srand(time(NULL));
    //�߰� �ڷ���
    int attack, skill, mpoint, apoint, run, runboom;

    // �⺻ ����

    printf("�߻��� ���̸���(��) ������.\n\n");
    // �ݺ��� ������~~~
    while (mon_HP > 0) {

        printf("��ī���� HP : %d\n", My_pok_HP);
        printf("��ī���� MP : %d\n\n", My_pok_MP);

        printf("���̸��� HP : %d\n", mon_HP);
        printf("���̸��� MP : %d\n\n", mon_MP);

        // �ݺ��� ���� ��ī��� ��?->����, (����)->��ų->���ط���/(�������п���->���ط���), �� �� �ٽ� ������


        printf("��ī���(��) ������ �ұ�? \n");
        printf("1, �����Ѵ�.\n2, ��������.\n��ȣ�� �Է��Ͻÿ�. :");
        scanf("%d", &attack);

        if (attack == 1) {
            printf("\n'�����Ѵ�.'��(��) �����ϼ̽��ϴ�.\n\n�����Ͻ� ��ų�� �����ϼ���.\n1, �⺻����(0mp)\n2, ���� ��ġ��(10mp)\n3, �鸸��Ʈ(25mp)\n4, ������ȭ(35mp)\n��ȣ�� �Է��Ͻÿ�. :");
            scanf("%d", &skill); //��ų ����
            if (skill == 1) {

                mpoint = 0;
                apoint = rand() % 31 + 5;
                mon_HP = mon_HP - apoint;
                My_pok_MP = My_pok_MP - mpoint;

                printf("\n���̸����� �⺻������ �����ߴ�.\n���̸����� %d�� ���ظ� ������. \n\n", apoint);
            }
            else if (skill == 2) {

                mpoint = 10;
                apoint = rand() % 65 + 10;
                mon_HP = mon_HP - apoint;
                My_pok_MP = My_pok_MP - mpoint;

                printf("\n���̸����� ���� ��ġ�⸦ �����ߴ�.\n���̸����� %d�� ���ظ� ������. \n\n", apoint);
            }
            else if (skill == 3) {

                mpoint = 25;
                apoint = rand() % 81 + 15;
                mon_HP = mon_HP - apoint;
                My_pok_MP = My_pok_MP - mpoint;

                printf("\n���̸����� �鸸��Ʈ�� �����ߴ�.\n���̸����� %d�� ���ظ� ������. \n\n", apoint);
            }
            else if (skill == 4) {

                mpoint = 35;
                apoint = rand() % 100 + 30;
                mon_HP = mon_HP - apoint;
                My_pok_MP = My_pok_MP - mpoint;

                printf("\n���̸����� ������ȭ�� �����ߴ�.\n���̸����� %d�� ���ظ� ������. \n\n", apoint);
            }
            else {
                printf("\n�ش�Ǵ� �޴��� �����ϴ�.\n�ٽ� �����ϼ���.\n");
                continue;
            }//���� ���� ����







        }
        else if (attack == 2) {
            printf("'��������.'��(��) �����ϼ̽��ϴ�.\n\n");

            run = rand() % 2 + 1;//�������п���
            if (run == 1) {
                printf("�������� �Ϳ� �����ϼ̽��ϴ�.\n\n");
                break;
            }
            else {
                printf("�������� �Ϳ� �����ϼ̽��ϴ�.\n������ �ϴ� ���� ������ ���߽��ϴ�.\n");
                runboom = rand() % 10 + 5;
                My_pok_HP = My_pok_HP - runboom;
                printf("%d�� �������� �޾� HP�� %d�� �Ǿ����ϴ�.\n\n", runboom, My_pok_HP);
            }



        }
        else {
            printf("\n�ش�Ǵ� �޴��� �����ϴ�.\n�ٽ� �����ϼ���.\n\n");
            continue;
        }
    }
    if (mon_HP <= 0) {
        //�ݺ��� �����ٰ� ����
        printf("�߻��� ���̸���(��) �����ƴ�!.\n\n");
    }

    printf("\n������ �����Ϸ��� Enter Ű�� �����ּ���.\n");
    char end_key;
    getchar();
    scanf("%c", &end_key);

    return 0;
}