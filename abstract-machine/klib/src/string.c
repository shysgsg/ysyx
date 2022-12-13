#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
#include <assert.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  // size_t len = 0;
  // assert(s);
  // while(*s++ != '\0')
  //     len ++;
  // return len;
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  // char *p=NULL;
  // if(dst == NULL || src == NULL)
  // {
  //     return NULL;
  // }
  // p = dst;
  // while((*dst++ = *src ++) != '\0');
  // return p;
  panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  // int ret = 0;
	// while(!(ret=*(unsigned char*)s1-*(unsigned char*)s2) && *s1)
	// {
	// 	s1++;
	// 	s2++;
	// }
	// if (ret < 0)
	// 	return -1;
	// else if (ret > 0)
	// 	return 1;
	// return 0;
  panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  // if (s == NULL || n < 0)
	// {
	// 	return NULL;
	// }
	// char *pdest = (char *)s;
	// while (n-->0)
	// {
	// 	*pdest++ = c;
	// }
	// return s;
  panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
