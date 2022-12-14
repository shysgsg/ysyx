#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
#include <assert.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t len = 0;
  assert(s);
  while(*s++ != '\0')
      len ++;
  return len;
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  char *p=NULL;
  if(dst == NULL || src == NULL)
  {
      return NULL;
  }
  p = dst;
  while((*dst++ = *src ++) != '\0');
  return p;
  panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
  char *tmp = dst;
  while (n) {
      if ((*tmp = *src) != 0)
          src++;
      tmp++;
      n--;
  }
  return dst;
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  // assert(dst != NULL && src != NULL);
  // char *temp = dst;
  // while (*temp != '\0')
  //   temp++;
  // while ((*temp++ = *src++) != '\0');
  // return dst;
  char* x = dst;
  while(*dst!='\0')
    dst++;
  while(*src!='\0')
  {
    *dst = *src;
    dst++;
    src++;
  }
  *dst = '\0';
  return x;
  panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  int ret = 0;
	while(!(ret=*(unsigned char*)s1-*(unsigned char*)s2) && *s1)
	{
		s1++;
		s2++;
	}
	if (ret < 0)
		return -1;
	else if (ret > 0)
		return 1;
	return 0;
  panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  assert(s1 && s2);
  if(!n)return 0;
  while(--n && *s1 && (*s1 == *s2))
  {
    s1++;
    s2++;
  }
  return *s1 - *s2;
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  if (s == NULL || n < 0)
		return NULL;
	char *pdest = (char *)s;
	while (n-->0)
		*pdest++ = c;
	return s;
  panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  if (n == 0) 
    return NULL;
  if (dst == NULL || src == NULL) 
    return NULL;
  
  char *_dst = NULL;
  char *_src = NULL;
  if (dst < src) 
  {
    _dst = (char *)dst;
    _src = (char *)src;
    
    while (n--) 
      *_dst++ = *_src++;
  } 
  else 
  {
    _dst = (char *)dst + n;
    _src = (char *)src + n;
    
    while (n--) 
      *_dst-- = *_src--;
  }
  return dst;
  // panic("Not implemented");
}

void *memcpy(void *dst, const void *src, size_t n) {
  if (dst == NULL || src == NULL || n <= 0)
    return NULL;
  
  char * pdst = (char *)dst;
  char * psrc = (char *)src;

  if (pdst > psrc && pdst < psrc + n)
  {
    pdst = pdst + n - 1;
    psrc = psrc + n - 1;
    while (n--)
      *pdst-- = *psrc--;
  }
  else
  {
    while (n--)
    *pdst++ = *psrc++;
  }
  return dst;
  // if ((in == NULL) || (out == NULL))
  //   return;
  // while (n--)
  //   *out++ = *in++;
  // return out;
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  // assert(s1 != NULL && s2 != NULL && n > 0);
  // const char *pdest = (char*)s1;
  // const char *psrc = (char*)s2;
  // while(*pdest == *psrc && --n>0)
  // {
  //   pdest++;
  //   psrc++;
  // }
  // int a = *pdest - *psrc;
  // if(a > 0)  
  //   return 1;
  // else if(a < 0)
  //   return -1;
  // else
  //   return 0;
  // return a;

  // assert((NULL != s1) && (NULL != s2));
	const char *pstr1 = (const char*)s1;
	const char *pstr2 = (const char*)s2;
	while (n--) {
    if (*pstr1 && *pstr2 && (*pstr1 == *pstr2)) 
		  continue;
	  else 
		  break;   
	}
	return (*pstr1 - *pstr2);
  panic("Not implemented");
}

#endif
