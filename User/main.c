#include "stm32f10x.h"                  // Device header
#include "delay.h"
#include "sys.h"
#include "oled.h"
#include "bmp.h"

int main(void)
{	
	delay_init();
	OLED_Init();
	OLED_ShowChar(48,6,' ',1);
	//OLED_ShowString(1,3,"Hello World!");
	//OLED_ShowNum(2,1,123455,4);
	//OLED_ShowSignedNum(2,7,-66,2);
	//OLED_ShowHexNum(3,1,0xaa55,4);
	//OLED_ShowBinNum(4,1,0xaa55,16);
	OLED_Clear(); 
	while(1)
	{
		OLED_ShowCHinese(54,0,3);//电
		OLED_ShowCHinese(72,0,4);//子
		OLED_ShowCHinese(90,0,5);//科
		OLED_ShowCHinese(108,0,6);//技
		
		
	}
	
}

