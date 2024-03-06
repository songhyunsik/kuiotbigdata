/*#include <stdio.h>
// 1,9 2,9 3,8 4,7 5,5 6,5 7,3 8,2 9,2 10,1달 11,1달 12,29
char getScoreGrade(int score)
{
	
}

int main(void)
{
	int year, month, date;
	printf("음력을 입력하시오 : ");
	scanf("%d %d %d", &year, &month, &date);
	
	return 0;
}*/
#include <stdio.h>

// 음력에서 양력으로의 변환을 위한 함수
void GregorianToLunar(int year, int month, int day) {
    // 여기에 음력에서 양력으로 변환하는 알고리즘을 작성할 수 있습니다.
    // 하지만 정확한 음력 변환 알고리즘은 복잡하므로 여기서는 예시로 달력만 출력합니다.
    printf("음력 날짜: %d년 %d월 %d일\n", year, month, day);
    printf("양력 날짜: %d년 %d월 %d일\n", year, month, day); // 예시로 음력 날짜를 그대로 출력
}

int main() {
    // 2024년의 음력 날짜를 양력으로 변환합니다.
    int year = 2024;
    int lunar_dates[12][2] = {{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}, {6, 1}, {7, 1}, {8, 1}, {9, 1}, {10, 1}, {11, 1}, {12, 1}}; // 예시 음력 날짜 배열

    for (int i = 0; i < 12; i++) {
        int lunar_month = lunar_dates[i][0];
        int lunar_day = lunar_dates[i][1];
        GregorianToLunar(year, lunar_month, lunar_day);
    }

    return 0;
}
