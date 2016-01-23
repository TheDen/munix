#!/bin/bash



for (( ; ; ))

do     
    espeak   --stdout  -s 300 -p 10 "boom" | aplay -q
    espeak   --stdout  -s 300 -p 10 "tish" | aplay -q
	
	
done 

#./munix | aplay -c 6 &
#sleep 2;
#pkill aplay;
#./munix | aplay -c 3 & 
#sleep 2;
#pkill aplay;
#./munix | aplay -c 5 &
#sleep 2;
#pkill aplay;
#./munix | aplay -c 10;
