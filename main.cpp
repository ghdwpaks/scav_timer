#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include<mmsystem.h>
#include <time.h>

#pragma comment(lib, "winmm.lib")
//#define SOUND_FILE_NAME "C:\\unused_git_workspace\\scav_alert.wav"
#define SOUND_FILE_NAME "scav_alert.wav"

using namespace std;
int main() {
	clock_t start_time = 0;
	clock_t end_time = 0;
	int key_start = 0;
	int key_end = 0;
	int int_rot = 0;

    start_time = clock();
	cout << "start timer" << endl;




    //
	int re = 1200;
    //





	while (true) {

        system("cls");
		end_time = clock();
		key_start = static_cast<int>(start_time);
		key_end = static_cast<int>(end_time);
        int_rot = (key_end - key_start)/1000;
        //printf("int rot = %d\t", int_rot);

        char userans_1='a';
        //cout << "남은시간 : " << (re - int_rot) / 60 << "분" << (re - int_rot) % 60 << "초" << endl;
        printf("남은시간 : ");
        if ((re - int_rot) / 60 != 0) {
            printf("%d분", (re - int_rot) / 60);
        }
        printf("%d초\n", (re - int_rot) % 60);
        
		if (int_rot >= re)
		{
			PlaySound(TEXT(SOUND_FILE_NAME), NULL, SND_FILENAME | SND_ASYNC);
            for (int i = 0; i < 10; i++)
            {
                printf("끝났습니다. 타이머를 갱신해주세요\n");
            }
            scanf("%c", userans_1);
            continue;
		}
        int stack_t = re / 20;
        printf("[");
        while (true)
        {
            if (stack_t * 20 <= int_rot) { printf("####################"); break; }
            else if (stack_t * 19 <= int_rot) { printf("###################-"); break; }
            else if (stack_t * 18 <= int_rot) { printf("##################--"); break; }
            else if (stack_t * 17 <= int_rot) { printf("#################---"); break; }
            else if (stack_t * 16 <= int_rot) { printf("################----"); break; }
            else if (stack_t * 15 <= int_rot) { printf("###############-----"); break; }
            else if (stack_t * 14 <= int_rot) { printf("##############------"); break; }
            else if (stack_t * 13 <= int_rot) { printf("#############-------"); break; }
            else if (stack_t * 12 <= int_rot) { printf("############--------"); break; }
            else if (stack_t * 11 <= int_rot) { printf("###########---------"); break; }
            else if (stack_t * 10 <= int_rot) { printf("##########----------"); break; }
            else if (stack_t * 9 <= int_rot) { printf("#########-----------"); break; }
            else if (stack_t * 8 <= int_rot) { printf("########------------"); break; }
            else if (stack_t * 7 <= int_rot) { printf("#######-------------"); break; }
            else if (stack_t * 6 <= int_rot) { printf("######--------------"); break; }
            else if (stack_t * 5 <= int_rot) { printf("#####---------------"); break; }
            else if (stack_t * 4 <= int_rot) { printf("####----------------"); break; }
            else if (stack_t * 3 <= int_rot) { printf("###-----------------"); break; }
            else if (stack_t * 2 <= int_rot) { printf("##------------------"); break; }
            else if (stack_t <= int_rot) { printf("#-------------------"); break; }
            else
            {
                printf("--------------------");
            }break;
        }
        printf("]");
        Sleep(100);
	}




	return 0;
}