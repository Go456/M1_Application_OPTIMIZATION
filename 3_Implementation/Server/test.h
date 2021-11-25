#include "unity.h"
#include <config.h>
#include<function.h>
#include<sock.h>

#include<admin_function.h>
#define PROJECT_NAME    "Reminder"




void test_login(void);
void test_errorMessage(void);



void setUp(){}

void tearDown(){}


int main()
{

  UNITY_BEGIN();


  RUN_TEST(test_login);<br/>
  RUN_TEST(test_menuExit);
  RUN_TEST(test_errorMessage);

  
  return UNITY_END();
}
