#include "string.h"

unsigned int push_str(string_t *dst, const char *src)
{
  chrs_t *current;
  chrs_t *newchr;

  if (!src || !dst)
    return (0);
  current = dst->head;
  while (!current)
    current = current->nxt;
  while (*src)
  {
    newchr = malloc(sizeof(chrs_t));
    newchr->chr = *src;
    newchr->nxt = NULL;

    current = newchr;
    dst->len++;
    src++;
  }
}

string_t new_str(const char *src) 
{
  string_t str;
  
  str->head = NULL;
  str->len = 0;
  push_str(&str, src);
  return str;
}

