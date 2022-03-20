# CMSC441Project

Group Member:
Myunghoon Cha
Jason Reckner
Matt Mangee

-------------------------------------------------------------------------------------------------

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
<<<<<<< Updated upstream
=======


  Size          BasicT       StarssenT          BasicM       StarssenM
     5             586             522             100             212
    10              44              74             400             212
    20             424             389         1.6e+03             212
    40        4.24e+03        3.04e+03         6.4e+03             212
    80        2.28e+04        2.31e+04        2.56e+04             212
   160        1.53e+05         1.6e+05        1.02e+05             212
   320        1.23e+06        1.12e+06         4.1e+05             212
   640           1e+07        8.33e+06        1.64e+06             212
---------------------------------------------------------------------------------------------
   Update 2022-03-20
   ※ printMatirx() function in matrix.cpp
   ※ it makes errors when tried to print out the result of starssen
   ※ Cut-off for Starssen algorithm is 256
   ※ if matrix size is less than 256 it's same as basicmatrix function.

   ※ Formula of memory usage of matrices:
   ※ Basic Matrix Multiplication = A + B + C
   ※ A, B, C = matrixSize * matrixSize * sizeof(double*)
   ※ Strassen = A + B + D
   ※ D = (21) * A/2

  Size          BasicT       StarssenT          BasicM       StarssenM
    10               5               5            2400            2400
    20              64              45            9600            9600
    40             289             290           38400           38400
    80            2376            2339          153600          153600
   160           18747           18455          614400          614400
   320          149705          136770      2.4576e+06      6.7584e+06
   640     1.20934e+06          941181      9.8304e+06     2.70336e+07


  Size          BasicT       StarssenT          BasicM       StarssenM
    10               5               6            2400            2400
    30             121             120           21600           21600
    90            3291            3330          194400          194400
   270           89670           80509      1.7496e+06      4.8114e+06
   810      2.4855e+06     1.87604e+06     1.57464e+07     4.33026e+07
  2430     1.58754e+08     3.93746e+07     1.41718e+08     3.89723e+08


  Size          BasicT       StarssenT          BasicM       StarssenM
     2               0               0              96              96
     4               1               1             384             384
     8               4               3            1536            1536
    16              23              19            6144            6144
    32             184             174           24576           24576
    64            1168            1164           98304           98304
   128            9689            9382          393216          393216
   256           76309           75455     1.57286e+06     1.57286e+06
   512          621026          537643     6.29146e+06     1.73015e+07
  1024     6.05302e+06     3.78716e+06     2.51658e+07      6.9206e+07
>>>>>>> Stashed changes
