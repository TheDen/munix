// main(i){for(i=0;;i++)putchar(((i*(i>>8|i>>9)&46&i>>8))^(i&i>>13|i>>6));}
#include <stdio.h>
int
main(i) {
  int j;
  for (i=0; ; i++) {

    //    putchar(i*(i>>8|i<9));
    //     putchar((i*(i>>23|i>>14)&75&i>>8)^((i>>27|i>>7)&20&i>>1));

    //       putchar(((i>>1|i>>7|i>>8)&12&i>>9)^(i&i>>12|i>>7|i&9&i));
    putchar((i>>20|i>>23|i<7)&34&i>>8^((i>>1|i>>7|i>>2)&13&i>>9)^(i&i>>14|i>>7|i&7&i));
            
  }
}



