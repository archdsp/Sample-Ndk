#include"log.h"
#include "module1.h"

/* 아래 warning 지시자는 컴파일 하기전에 경고 메시지를 던지는 아이 입니다.
 유사 제품으로 error지시자가 있는데 얘는 그냥 뱉어버립니다.
 예를들어 특정 OS 플랫폼에서는 동작이 안되거나 일부 기능이 작동되지 않을 수
 있음을 알릴 때, 다음과 같이 응용합니다.

#ifdef __WINDOW__
#error "WINDOW 환경은 지원하지 않습니다"
#elseif __BSD__
#warning "일부 function들은 기능을 지원하지 않습니다."
#endif
*/

// 아래의 주석을 해제하여 테스트 해보세요.
#define WARING_EXAMPLE
#ifdef WARNING_EXAMPLE
#warning "THIS IS HOW TO WARN 'SOMETHING' BEFORE COMPILE"
#endif

void test_function(void)
{
	TEST_API_LEVEL();
	return;
}
