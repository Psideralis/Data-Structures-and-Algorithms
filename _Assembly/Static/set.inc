;/* *********************************************
;Author: Psideralis
;License: GNU GPL 3.0
;File name: 
;Description: 
;
;TODO:
;
;********************************************* */ 

struc map 
  .key:       resq  1
  .value:     resq  1
  .link:      resq  1
endstruc

struc   set 
  .size:      resq  1
  .entry:     resq  3
  .link:      resq  1
endstruc

struc   light_set 
  .size:      resq  1
  .entry:     resq  1
  .link:      resq  1
endstruc