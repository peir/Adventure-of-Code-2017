#include <stdio.h>
#include <string.h>


int main(int argc, char** argv)
{
  char* capacha = "91212129";
  size_t len = strlen(capacha);
  char prev = capacha[len - 1];
  
  size_t total = 0;
  int i;
  for(i = 0; i < len; i++) {
    if(capacha[i] == prev) {
      total += (size_t) prev - '0';
    }
    prev = capacha[i];
  }
  
  printf("%zu\n", total);
}
