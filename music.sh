#!/bin/bash



echo "main(t){for(t=0;;t++)putchar(t*2*(21&t>>11));}" | gcc -xc -o c - ; chmod a+rx c; ./c | aplay --format u8 --rate 8000﻿


#echo "main(t){for(t=0;;t++)putchar(t*((42&t>>10)%14));}" | gcc -xc -o c - ; chmod a+rx c; ./c | aplay --format u8 --rate 8000﻿
