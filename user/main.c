#include "stm32f10x.h"                  // Device header
int main(void)
{	/*RCC->APB2ENR = 0X00000010;
	GPIOC->CRH = 0X00300000;
	GPIOA->ODR = 0X00002000;*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;//¶¨Òå½á¹¹Ìå
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;//ÍÆÍìÊä³ö
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_0 |GPIO_Pin_1|GPIO_Pin_2;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStruct);
	GPIO_SetBits(GPIOA,GPIO_Pin_1);//¸ßµçÆ½
	GPIO_ResetBits(GPIOA,GPIO_Pin_2);//µÍµçÆ½
	while (1)
		
	{
		
	}
	
}



