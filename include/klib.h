#ifndef __INCLUDE_KLIB_H__
#define __INCLUDE_KLIB_H__
#include "type.h"

#define CHAR_QUEUE_BUF_MAX 10
typedef struct char_queue
{
	char buf[CHAR_QUEUE_BUF_MAX];
	uint32_t head;
	uint32_t tail;
}char_queue_t;


extern void reverse_string(char* string, int len);
extern char* itoa(char* buffer, int number, int base);
extern void disp_int(int number);
extern void disp_hex(int number);
extern void clear_some_lines(uint32_t start, uint32_t cnt);

extern void delay(int time);

extern uint32_t disp_pos;
extern uint32_t disp_pos_per_line;
extern uint32_t disp_line_limit;
extern uint32_t disp_char_per_line;

extern void* memcpy(void* dst, void* src, int size);
extern void disp_str(char* str);


#endif
