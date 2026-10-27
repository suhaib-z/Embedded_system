#include <stdio.h>
#include <stdint.h>
uint32_t modify_bit(uint32_t value,unsigned int bit,char operation) 
{
  if (bit > 31) return value;           
  uint32_t mask = (uint32_t)1 << bit;
   switch (operation) 
   {
      case 'S': return value | mask;      
      case 'C': return value & ~mask;    
      case 'T': return value ^ mask;    
      case 'G': return (value & mask) ? 1u:0u;
      default:  return value;              
    }
}

int main(void) 
{
  printf("value=0x08,bit=3,'C'->0x%02X\n",modify_bit(0x08,3,'C'));
  printf("value=0x08,bit=2,'S'->0x%02X\n",modify_bit(0x08,2,'S'));
  printf("value=0x08,bit=3,'T'->0x%02X\n",modify_bit(0x08,3,'T'));
  printf("value=0x08,bit=3,'G'->%u\n",modify_bit(0x08,3,'G'));
    return 0;
}
