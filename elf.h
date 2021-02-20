#ifndef _elf_h
#define _elf_h

#include <stdint.h>

int elf_teensy_model_id(const unsigned char *elf);
int is_elf_binary(uint32_t addr, unsigned int len);
void get_elf_binary(uint32_t addr, int len, unsigned char *buffer);
int get_elf_eeprom(uint8_t *buffer, int size);
int parse_elf(const unsigned char *elf);
void print_elf_info(void);

#endif
