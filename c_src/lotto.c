#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	
	/*int numbers[7], numbers2[7];
	srand(time(NULL));
	
	
	for(int i = 0; i < 7; ++i){
		int dice = rand() % 45 + 1;
		numbers[i] = dice;
		numbers2[i] = numbers[i];
	}
	for(int i = 0; i < 7; ++i){
		for(int j = 0; j < 7; ++j){
			if(numbers[i] == numbers2[j]){
				int dice = rand() % 45 + 1;
				numbers[i] = dice;
			}
		}
	}
	for(int i = 0; i < 7; ++i){
		printf("%d ", numbers[i]);
	}
	
	int win=0;
	int win2=0;
	int numbers1;
	int grade;
	int bonus;
	
	/*
		for(int i = 0; i < 6; ++i){
		 	//scanf --> answer[i]
		 	scanf("%d", numbers1[i]);
		}
		for(int i = 0; i < 6; ++i){
			for(int j = 0; j < 6; ++j){
		 		if(numbers[i] == numbers1[j]){
		 			if(i==j){
		 				++win;
		 			} 
		 		}
		 	}
		}
		if(numbers[6] == numbers1[6]){
			bonus = 1;
		} else {
			bonus = 0;
		}
		
		if(win == 6){
		grade = 1;
			printf("당신의 당첨 순위는 %d입니다!\n", grade);
		} else if(win == 5){
			if(bonus = 1){
		  		grade = 2;
				printf("당신의 당첨 순위는 %d입니다!\n", grade);
			} else if(bonus = 0){
		  		grade = 3;
				printf("당신의 당첨 순위는 %d입니다!\n", grade);
			}
		}else if(win == 4){
		grade = 5;
			printf("당신의 당첨 순위는 %d입니다!\n", grade);
		}else if(win == 3){
		  		grade = 5;
				printf("당신의 당첨 순위는 %d입니다!\n", grade);
			}
		
		
	
	*/
	
	//printf("congraturation. your count : %d\n", count);
	
	int lotto[7];
    
    srand(time(NULL));
    for(int i = 0; i < 7;){
    	lotto[i] = rand() % 45 + 1;		//unique[1,45]
    	
    	int j;
    	for(j = 0; j < i; ++j){
    		if(lotto[i] == lotto[j]){
    			break;
    		}
    	}
    	if(j==i){
    		//not found
    		++i;
    	}
    }
    
	for(int i = 0; i < 7; ++i){
    	printf("%d ", lotto[i]);
    }
    printf("\n");
	return 0;
}
