#include "drivers/stm32l432xx.h"

// User LED (LD3) is mapped to PB3

static int counter = 0;
static int state = 0;

int main(void)
{
  RCC->AHB2ENR |= RCC_AHB2ENR_GPIOBEN;
  GPIOB->MODER ^= GPIO_MODER_MODE3;
  GPIOB->MODER |= GPIO_MODER_MODE3_0;

  while (1)
  {
    counter++;

    if (counter > 60000)
    {
      state = !state;

      if (state) {
        GPIOB->ODR |= GPIO_ODR_OD3;
      } else {
        GPIOB->ODR ^= GPIO_ODR_OD3;
      }

      counter = 1;
    }
  }
}

void SystemInit(void)
{
  // Do nothing on system init
}

void SystemClock_Config(void)
{
  // Consider adding clock configuration
}

void Error_Handler(void)
{
  // Consider disabling interrupts
  while (1)
  {
    // Infinite loop on error
  }
}