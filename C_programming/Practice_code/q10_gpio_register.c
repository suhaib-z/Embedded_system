#include <stdio.h>
#include <stdint.h>
volatile uint8_t GPIO_REG=0x00;
int gpio_config(uint8_t pin,uint8_t val) 
{
  if (pin>7) 
    return -1;
  if (val) GPIO_REG |= (uint8_t)(1u<<pin);
  else GPIO_REG &= (uint8_t)~(1u<<pin);
  return 0;
}
int gpio_set(uint8_t pin) 
{
  if (pin>7) return-1;
  GPIO_REG |= (uint8_t)(1u<<pin);
  return 0;
}
int gpio_clear(uint8_t pin) 
{
  if (pin>7) return-1;
  GPIO_REG &= (uint8_t)~(1u<<pin);
  return 0;
}
int gpio_toggle(uint8_t pin) 
{
  if (pin>7) return-1;
  GPIO_REG ^= (uint8_t)(1u<<pin);
  return 0;
}
int gpio_read(uint8_t pin) 
{
  if (pin>7) return-1;
  return (GPIO_REG >> pin)&1u;
}
int main(void) 
{
  printf("Initial GPIO_REG = 0x%02X\n",GPIO_REG);
  gpio_set(3);
  printf("Set pin 3->GPIO_REG = 0x%02X\n",GPIO_REG);
  gpio_toggle(3);
  printf("Toggle pin 3->GPIO_REG = 0x%02X\n",GPIO_REG);
  gpio_set(5);
  printf("Set pin 5->GPIO_REG = 0x%02X\n",GPIO_REG);
  printf("Read pin 5-> %d\n",gpio_read(5));
  gpio_config(1,1);
  printf("Config pin 1=1->GPIO_REG = 0x%02X\n",GPIO_REG);
  gpio_clear(5);
  printf("Clear pin 5-> GPIO_REG = 0x%02X\n",GPIO_REG);

  if (gpio_set(8)<0)
    printf("Pin 8 is invalid(must be 0-7)\n");
  return 0;
}
