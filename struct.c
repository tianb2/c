#include <stdio.h>
#include <string.h>

int main() {
  struct sigrecord {
    int signum;
    char signame[20];
    char sigdesc[100];
  } sigline, *sigline_p;

  sigline.signum = 5;
  strcpy(sigline.signame, "SIGINT");
  printf("sigline.signame length %lu\n", strlen(sigline.signame)); // 6
  strcpy(sigline.sigdesc, "Interrupt from keyboard");
  printf("sigline.sigdesc length %lu\n", strlen(sigline.sigdesc)); // 23

  sigline_p = &sigline;
  /* sigline_p->signum = 5; */
  /* strcpy(sigline_p->signame, "SIGINT"); */
  /* strcpy(sigline_p->sigdesc, "Interrupt from keyboard"); */
}
