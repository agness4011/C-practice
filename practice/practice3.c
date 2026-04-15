//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	int num;
//	printf("정수 입력:");
//	scanf("%d", &num);
//	if (num > 0)
//		printf("양수임.\n");
//	else if (num < 0)
//		printf("음수임.\n");
//	else 
//		printf("0.\n");
//	printf("입력된 값은 %d임.\n", num);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
////p.253 예제 1번
//int main() {
//	int a, b;
//	printf("정수를 입력하시오:");
//	scanf("%d %d", &a, &b);
//	if (a % b == 0)
//		printf("%d는 %d의 약수입니다.", b, a);
//	else
//		printf("%d는 %d의 약수가 아닙니다.", b, a);
//
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
////문자를 입력바다 소문자인지 출력
////실행 예 1
////문자 입력 : a
////소문자
////실행 예 2
////문자 입력 : A
////소문자 아님
//
//int main() {
//	char c;
//	printf("문자 입력:");
//	scanf("%c", &c);
//	if (c >= 'a' && c <= 'z')
//		printf("소문자\n");
//	else if (c >= 'A' && c <= 'Z')
//		printf("대문자\n");
//	else if (c >= '0' && c <= '9')
//		printf("숫자\n");
//	else
//		printf("기타 문자\n");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	int n, d, result;
//	printf("분자와 분모 입력:");
//	scanf("%d %d", &n, &d);
//	if (d == 0) {
//		printf("분모는 0으로 나눌 수 없음.\n");
//	}
//	else {
//		result = n / d;
//		printf("결과 %d\n", result);
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	int score;
//	printf("성적 입력:");
//	scanf("%d", &score); 
//	if (score >= 90) //순서대로 조건을 확인하여 참이면
//		printf("A학점\n"); //해당 문장 실행 후 if문을 빠져나감
//	else if (score >= 80) //else if 여러 개 가능 / 생략 가능
//		printf("B학점\n");
//	else if (score >= 70)
//		printf("C학점\n");
//	else if (score >= 60)
//		printf("D학점\n");
//	else
//		printf("F학점\n");
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	char ch;
//	printf("문자 입력:");
//	ch = getchar(); // scanf("%c", &ch); //문자 입력받는 방법 2가지	
//	if (ch >= 'A' && ch <= 'Z')
//		printf("%c 대문자 \n", ch);
//	else if (ch >= 'a' && ch <= 'z')	
//		printf("%c 소문자 \n", ch);
//	else if (ch >= '0' && ch <= '9')
//		printf("%c 숫자 \n", ch);
//	else
//		printf("%c 기타 문자 \n", ch);
//}

////p.253 예제4번 변형
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	int x, y;
//	printf("키: ");
//	scanf("%d", &x);
//	if (x <= 139)
//		printf("불가");
//	else {
//		printf("나이: ");
//		scanf("%d", &y);
//		if (y < 10)
//			printf("불가");
//		else
//			printf("가능");
//	}
//}
//
////p.255 10번 변형
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	double x, y;
//	printf("x y: ");
//	scanf("%lf %lf", &x, &y);
//	if (x == 0 && y == 0)
//		printf("원점");
//	else if (x > 0 && y > 0)
//		printf("1사분면");
//	else if (x > 0 && y < 0)
//		printf("4사분면");
//	else if (x < 0 && y>0)
//		printf("2사분면");
//	else
//		printf("3사분면");
//}

//p.253 3번
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int com, per;
//	srand(time(0)); //srand() 함수는 rand() 함수 호출 전 한번만 실행
//
//	com = rand() % 3; //rand() 함수는 난수를 반환
//	//printf("%d\n", com);
//	printf("0 가위, 1 바위, 2 보:");
//	scanf("%d", &per);
//	//if (per == com)
//	//	printf("무승부");
//	//else if ((per == 0 && com == 2) ||
//	//	(per == 1 && com == 0) ||
//	//	(per == 2 && com == 1))
//	//	printf("사용자가 이겼습니다");
//	//else
//	//	printf("컴퓨터가 이겼습니다");
//	if (per == com) 
//		printf("무승부");
//	else if ((com - per + 3) % 3 == 1) //컴퓨터가 이겼을 때
//		printf("컴퓨터가 이겼습니다");
//	else
//		printf("사용자가 이겼습니다");
//

//}

//p.245 
// 1, 3, 5, 7, 8, 10, 12월은 31일
//월 범위가 벗어난 경우 0일(1번)  else if 문으로
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	int month, days;
//	printf("월 입력:");
//	scanf("%d", &month);
//	switch (month) {
//	case 2:
//		days = 28;
//		break;
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		days = 31;
//		break;
//	case 4: case 6: case 9: case 11:
//		days = 30;
//		break;
//	default:
//		days = 0;
//
//	}
//	printf("%d월은 %d일\n", month, days);
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	int year, month, day;
//	printf("연도 월:");
//	scanf("%d %d", &year, &month);
//	if (year < 0 || month < 1 || month >12) {
//		printf("입력 범위가 잘못되었습니다.");
//		return 1;
//	}
//	switch (month) {
//		case 2:
//			if (year % 4 == 0 && year % 100 != 0 || year % 400 ==0 ) {
//				day = 29;
//			}
//			else {
//				day = 28;
//			}
//			break;
//		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//			day = 31;
//			break;
//		case 4: case 6: case 9: case 11:
//			day = 30;
//			break;
//		default:
//			day = 0;
//
//
//	}
//	printf("%d년 %d월은 %d일.\n", year, month, day);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	char op;
//	int x, y, result;
//	printf("수식을 입력하시오(예: 1 + 2):");
//	scanf("%d %c %d", &x, &op, &y);
//	switch (op) {
//	case '+': result = x + y; break;
//	case '-': result = x - y; break;
//	case '*': result = x * y; break;
//	case '/': result = x / y; break;
//	case '%': result = x % y; break;
//	default:
//		printf("지원되지 않는 연산자입니다");
//	}
//	printf("%d %c %d = %d\n", x, op, y, result);
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	int hour;
//	printf("시간 입력:");
//	scanf("%d", &hour);
//	if (hour == 0)
//		printf("오전 12시\n");
//	else if (hour > 0 && hour < 12)
//		printf("오전 %d시\n", hour);
//	else if (hour == 12)
//		printf("오후 12시\n");
//	else if (hour > 12 && hour < 24)
//		printf("오후 %d시\n", hour - 12);
//	else
//		printf("시간 입력이 잘못되었습니다.\n");
//}


////p.258~ 반복문
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	int n;
//	int i = 1;
//	printf("출력하고 싶은 단:");
//	scanf("%d", &n);
//
//	while (i <= 19) {
//		printf("%d * %d =%d\n", n, i, n*i);
//		i++;
//	}
//	return 0;
//
//}

////p.265
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	int i, n, sum;
//	printf("자연수 입력:");
//	scanf("%d", &n);
//	i = 1;
//	sum = 0;
//	while (i <= n) {
//		sum += i;
//		i = i + 2; // 홀수의 합
//	}
//	printf("1~%d까지 합 =  %d\n", n, sum);
//}

////p.271~ while문
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	int grade, n, i;
//	float sum, average;
//	printf("학생 수:");
//	scanf("%d", &n);
//	sum = 0;
//	i = 1;
//	while (i <= n) {
//		printf("성적 입력:");
//		scanf("%d", &grade);
//		sum += grade;
//		i++;
//	}
//	average = sum / n;
//	printf("%d명 학생의 성적 평균 = %.lf\n", n, average);
//}

////p.276~ do while 문
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//int main() {
//	int num, sum = 0;
//	do {
//		printf("정수 입력:");
//		scanf("%d", &num);
//		sum += num;
//	} while (num != 0);
//	printf("입력된 정수의 합 = %d\n", sum);
//	return 0;
//}


//p.279  숫자 추측
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdlib.h>
//#include <time.h>
//#include <stdio.h>
//int main() {
//	srand((unsigned)time(NULL));
//	int answer = rand() % 100 + 1; //1~100 사이의 난수
//	int guess, tries = 0;
//	do {
//		printf("정답 추측(1~100):");
//		scanf("%d", &guess);
//		tries++;
//		if (guess > answer)
//			printf("HIGHT \n");
//		else if (guess < answer)
//			printf("LOW \n");
//	} while (guess != answer);
//	printf("CORRECT! 시도 횟수: %d\n", tries);
//}


//사용자가 입력한 수를 컴퓨터가 맞추게
//난수는 ㄴ사용하지 않음, 사용자로부터 정수 범위(1~100) 입력받고 범위 벗어나면 다시 입력받음
//초기값이 low = 100, high = 100인 변수 선언
//guess = (low + high) / 2; //guess는 low와 high의 평균값
//HIGH이면 low = guess;
//LOW이면 high = guess;
// 
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdlib.h>
//#include <time.h>
//#include <stdio.h>
//int main() {
//	int answer, guess, tries = 0;
//	do {
//		printf("정수 범위 입력(1~100):");
//		scanf("%d", &answer);
//	} while (answer < 1 || answer > 100);
//	int low = 1, high = 100;
//	do {
//		printf("정답 추측:");
//		scanf("%d", &guess);
//		tries++;
//		if (guess > answer)
//			printf("HIGHT \n");
//		else if (guess < answer)
//			printf("LOW \n");
//	} while (guess != answer);
//	printf("CORRECT! 시도 횟수: %d\n", tries);
//}


//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//	long long fact = 1;
//	int i, n;
//	printf("정수 입력:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		fact = fact * i;
//	printf("%d! = %lld", n, fact);
//}


//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int n;
//	for (int n = 1; n <= 9; n++) {
//		for (int i = 1; i <= 9; i++) {
//			printf("%d * %d = %d\n", n, i, n * i);
//		}
//		putchar('\n');
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int x, y;
//	for (y = 1; y <= 5; y++) {
//		for(x=1; x<=y; x++) 
//			printf("*");
//		
//		putchar('\n');	
//	}
//}