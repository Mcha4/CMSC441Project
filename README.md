# CMSC441Project

Group Member:
Myunghoon Cha
Jason Reckner
Matt Mangee


Progress Report
https://docs.google.com/document/d/1PO1W4ZdfBqBbq8ROVMgjB6G-rJ26EJ51fdB-3N8BWBU/edit?usp=sharing


Size          BasicT       StarssenT          BasicM       StarssenM
     5               4               3               0               0
    10              15              15               0               0
    20             118             116               0               0
    40             657             503               0               0
    80        1.98e+03        2.55e+03               0               0
   160        1.29e+04        1.33e+04               0               0
   320        8.99e+04           9e+04               0               0
   640        7.41e+05        6.37e+05               0               0
1.28e+03        7.23e+06        7.21e+06               0               0
2.56e+03        1.97e+08        3.54e+07               0               0


Size          BasicT       StarssenT          BasicM       StarssenM
     5             586             522             100             212
    10              44              74             400             212
    20             424             389         1.6e+03             212
    40        4.24e+03        3.04e+03         6.4e+03             212
    80        2.28e+04        2.31e+04        2.56e+04             212
   160        1.53e+05         1.6e+05        1.02e+05             212
   320        1.23e+06        1.12e+06         4.1e+05             212
   640           1e+07        8.33e+06        1.64e+06             212
   
   
   Size of algorithm:
   Basic matrix = matrixSize * matrixSize * int pointer * 3
   
   StarssenMatrix = (matrixSize * matrixSize) * 3 + (M1~M7 + C11~C22) * matirxSize/256 + (matrixSize * matrixSize) * matirxSize%256
