#include <stdio.h>

//main(t){for(t=0;;t++)putchar(t*(((t>>12)|(t>>8))&(63&(t>>4))));}

main(i) {
  int j;
  for (i=0; ; i++) {
    //putchar(i*(i>>j%2)>>10%2*i);
    
    // putchar((i>>2|i>>3|i<<7)&10&i); phone dail tone
    
    if ( i<20000 ) {
      putchar((i*5>>i%1|i>>4));
    }
    
  }
}
  


