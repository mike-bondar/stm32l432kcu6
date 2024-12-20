#include "drivers/stm32l432xx.h"

int main(void)
{
  while (1)
  {
    // Infinite loop; Do nothing
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