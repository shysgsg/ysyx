#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <ctype.h>
// #include <assert.h>
// #include <stdio.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
#define is_digit(c)    ((c) >= '0' && (c) <= '9')


int get_format_length(const char* begin, const char* end) {
  return end - begin + 1;
}

int myitoa(int n, char str[], int radix)  //将整数表达成字符形态
{  
    int i , j , remain;  
    char tmp;  
    i = 0;  
    do                                   //例如n = 25，radix = 10（表达成10进制），　　　　　　
    {  
        remain = n % radix;  
        if(remain > 9)  
            str[i] = remain  - 10 + 'A';  //为了十六进制，10将表示成A
        else  
            str[i] = remain + '0';        //将整数+'0' = 整数对应的ASCII码
        i++;  
    }while(n /= radix); 
    str[i] = '\0';  
    int len;
    len = i + 1;
    for(i-- , j = 0 ; j <= i ; j++ , i--)  //25%10 = 5,25/10 = 2,2%10 = 2,2/10 = 0，所以str中结果是倒置的，翻转一下
    {  
        tmp = str[j];  
        str[j] = str[i];  
        str[i] = tmp;  
    }
    return len;
}  



// static int skip_atoi(const char **s)  //把字符表述的整型数字转化成真正的整型
// {
//     int i = 0;
//     while (is_digit(**s)) {
//         i = i * 10 + *((*s)++) - '0';
//     }
//     return i;
// }

// int vsprintf(char *buf, const char *fmt, va_list args)
// {
//   int len;
//   int i;
//   char *str;
//   char *s;
//   int *ip;
//
//   int flags;
//
//   int field_width;
//   int precision;
//   int qualifier;
//
//   for (str=buf ; *fmt ; ++fmt) {
//   if (*fmt != '%') {
//   *str++ = *fmt;
//   continue;
//   }
//
//
//   flags = 0;
//   repeat:
//   ++fmt;
//   switch (*fmt) {
//   case '-': flags |= LEFT; goto repeat;
//   case '+': flags |= PLUS; goto repeat;
//   case ' ': flags |= SPACE; goto repeat;
//   case '#': flags |= SPECIAL; goto repeat;
//   case '0': flags |= ZEROPAD; goto repeat;
//   }
//
//
//   field_width = -1;
//   if (is_digit(*fmt))
//   field_width = skip_atoi(&fmt);
//   else if (*fmt == '*') {
//
//   field_width = va_arg(args, int);
//   if (field_width < 0) {
//   field_width = -field_width;
//   flags |= LEFT;
//   }
//   }
//
//
//   precision = -1;
//   if (*fmt == '.') {
//   ++fmt;
//   if (is_digit(*fmt))
//   precision = skip_atoi(&fmt);
//   else if (*fmt == '*') {
//
//   precision = va_arg(args, int);
//   }
//   if (precision < 0)
//   precision = 0;
//   }
//
//
//   qualifier = -1;
//   if (*fmt == 'h' || *fmt == 'l' || *fmt == 'L') {
//   qualifier = *fmt;
//   ++fmt;
//   }
//
//   switch (*fmt) {
//   case 'c':
//   if (!(flags & LEFT))
//   while (--field_width > 0)
//   *str++ = ' ';
//   *str++ = (unsigned char) va_arg(args, int);
//   while (--field_width > 0)
//   *str++ = ' ';
//   break;
//
//   case 's':
//   s = va_arg(args, char *);
//   len = strlen(s);
//   if (precision < 0)
//   precision = len;
//   else if (len > precision)
//   len = precision;
//
//   if (!(flags & LEFT))
//   while (len < field_width--)
//   *str++ = ' ';
//   for (i = 0; i < len; ++i)
//   *str++ = *s++;
//   while (len < field_width--)
//   *str++ = ' ';
//   break;
//
//   case 'o':
//   str = number(str, va_arg(args, unsigned long), 8,
//   field_width, precision, flags);
//   break;
//
//   case 'p':
//   if (field_width == -1) {
//   field_width = 8;
//   flags |= ZEROPAD;
//   }
//   str = number(str,
//   (unsigned long) va_arg(args, void *), 16,
//   field_width, precision, flags);
//   break;
//
//   case 'x':
//   flags |= SMALL;
//   case 'X':
//   str = number(str, va_arg(args, unsigned long), 16,
//   field_width, precision, flags);
//   break;
//
//   case 'd':
//   case 'i':
//   flags |= SIGN;
//   case 'u':
//   str = number(str, va_arg(args, unsigned long), 10,
//   field_width, precision, flags);
//   break;
//
//   case 'n':
//   ip = va_arg(args, int *);
//   *ip = (str - buf);
//   break;
//
//   default:
//   if (*fmt != '%')
//   *str++ = '%';
//   if (*fmt)
//   *str++ = *fmt;
//   else
//   --fmt;
//   break;
//   }
//   }
//   *str = '';
//   return str-buf;
// }




int printf(const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  char buf[1024];
  int n = vsprintf(buf, fmt, args);
  va_end(args);
  for(int i = 0; buf[i] != '\0'; i++) {
    putch(buf[i]);
  }
  return n;
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  //实现%s 和 %d %c %x 
  char *str = out;
  while(*fmt){
    if(*fmt != '%'){
        *str = *fmt++;
        str++;
        continue;
    }
    fmt++;
    //先判断是不是数字
    const char * format_begin = fmt;
    const char * format_end = fmt; 
    while (is_digit(*fmt)) {
      format_end ++;
      fmt ++;
    }
    int format_len = get_format_length(format_begin, format_end);
    switch (*fmt++) {
      case 's' : {
        char * t = va_arg(ap, char*);
        int len = strlen(t);
        for(int i = 0; i < len; i++) {
          *str++ = *t++;
        }
        break;
      }
      case 'd' : {
        long int n = va_arg(ap, int);
        if (n < 0) {
          n = - n;
          *str++ = '-';
        }
        uint32_t num = (uint32_t)n;
        char num_str[30];
        int i = myitoa(num, num_str, 10);
        if ( i < format_len) {
          memset(str, ' ', format_len - i);
          str += format_len - i;
        }
        strcpy(str, num_str);
        str += i;
        break;
      }
      case 'u': {
        uint32_t num = va_arg(ap, int);
        char num_str[30];
        int i = myitoa(num, num_str, 10);
        if ( i < format_len) {
          memset(str, ' ', format_len - i);
          str += format_len - i;
        }
        strcpy(str, num_str);
        str += i;
        break;
      }
      case 'c': {
        char c = (char)va_arg(ap, int);
        *str++ = c;
        break;
      }
      case 'p':
      case 'x': {
        uint32_t num = va_arg(ap, uint32_t);
        char num_str[30];
        int i = myitoa(num, num_str, 16);
        if ( (i + 2) < format_len) {
          memset(str, ' ', format_len - i - 2 );
          str += format_len - i -2 ;
        }
        *str++ = '0';
        *str++ = 'x';
        strcpy(str, num_str);
        str += i;
        break;
      }
      default :
        printf("%c\n", --fmt);
        assert(0);
        break;
    }
  }
  *str='\0';
  return 0;
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  int     iReturn ;
  va_list pArgs ;
  va_start (pArgs, fmt) ;
  iReturn = vsprintf (out, fmt, pArgs) ;
  va_end (pArgs) ;
  return iReturn ;  
  panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
