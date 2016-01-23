 #!/bin/bash  
wait=0.2
#echo $wait;
for ((;;)); do espeak -g 0 -s 200 -p 10 -a 1000 "sch"; sleep $wait; espeak -g 0 -s 200 -p 0 -a 500 "schc"; sleep $wait; done 
