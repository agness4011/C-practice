//260415 p.291 이후 (C Express07 반복문)
//while, do whie, for
//1~10까지 출력하는 프로그램
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i;
//	for (i = 1; i <= 10; i++) {
//		printf("%d ", i);
//	}
//	printf("\n");
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i=1;
//	while (i <= 10) {
//		printf("%d", i);
//		i++;
//	}
//	printf("\n");
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i = 1;
//	do {
//		printf("%d", i);
//		i++;
//
//	} while (i <= 10);
//	printf("\n");
//}

//10부터 1까지 역순으로 출력하는 프로그램
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i;
//	for (i = 10; i >= 1; i--) {
//		printf("%d ", i);
//	}
//	printf("\n");
//	
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i = 10;
//	while (i >= 1) {
//		printf("%d", i);
//		i--;
//		printf("\n");
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i = 10;
//	do {
//		printf("%d", i);
//		i--;
//	} while (i >= 1);
//	printf("\n");
//}


//1~10~1까지 출력하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int i;
	for (i = 1; i <= 10; i++) {
		printf("%d ", i);
		printf("\n");
	}
	for (i = 9; i >= 1; i--) {
		printf("%d ", i);
		printf("\n");
	}

}