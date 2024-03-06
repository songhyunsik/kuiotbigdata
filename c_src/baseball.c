#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int question[3];
	
	srand(time(NULL));
	/*question[0] = rand() % 9 + 1;
	
	question[1] = rand() % 9 + 1;
	while(question[0] == question[1]){
	 	question[1] = rand() % 9 + 1;
	 }
	 question[2] = rand() % 9 + 1;
	while(question[0] == question[1] || question[1] == question[2]){
	 	question[2] = rand() % 9 + 1;
	 }*/
	 
	 question[0] = rand() % 9 + 1;
	 
	 do{
	 	question[1] = rand() % 9 + 1;
	 } while(question[0] == question[1]);
	 
	 do{
	 	question[2] = rand() % 9 + 1;
	 } while(question[0] == question[1] || question[1] == question[2]);
	
	/*for(int i = 0; i < 3; ++i){
		//question[i] <--- unique! [1,9] random num
		int dice = rand() % 9 + 1;
		question[i] = dice;
	}*/
	
	int strike=0;
	int ball=0;
	
	int count=0;
	
	while(strike != 3){
		strike = ball = 0;
		++count;
		
		int answer[3];
		printf("input answer : ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
	
		//#strike, #ball
		for(int i = 0; i < 3; ++i){
			for(int j = 0; j < 3; ++j){
				if(question[i] == answer[j]){
					if(i == j){
						//strike
						++strike;
					}else {
						//ball
						++ball;
					}
				}
			}
		}
		
		printf("#strike : %d\tball : %d\n", strike, ball);
		
		if(strike == 3){
			break;
			}
			
	}
	
	/*while(strike != 3){
	strike = 0;
	ball = 0;
	++count;
		for(int i = 0; i < 3; ++i){
		 	//scanf --> answer[i]
		 	scanf("%d", &answer[i]);
		}
		//#strike, #ball
		for(int i = 0; i < 3; ++i){
			for(int j = 0; j < 3; ++j){
		 		if(answer[i] == question[j]){
		 			if(i==j){
		 				++strike;
		 			} 
		 			else if(i != j && answer[i] == question[j]){
		 				++ball;
		 				
		 			}
		 		}
		 	}
		 	
		}
		printf("%dS, %dB\n", strike, ball);
		
		
		if(strike == 3){
			break;
		}
	
	}*/
	
	printf("congraturation. your count : %d\n", count);
	return 0;
}
