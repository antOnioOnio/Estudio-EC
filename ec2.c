------------------------------------------------------------------------------------------------------
Un computador con 13 líneas de direcciones tiene una memoria de M palabras y utiliza una E/S localizada 
en memoria. Si se supone que cada uno de los periféricos que puede conectarse ocupa 4 direcciones y que 
el número máximo de periféricos de estas características que se conecta es de 2^10. ¿Cuál es el tamaño
 de la memoria del computador?
------------------------------------------------------------------------------------------------------



------------------------------------------------------------------------------------------------------
Un computador con 20 lineas de direccion y memoria de bytes tiene 640KB de RAM 128KB de ROM y utiliza
E/S mapeada en memoria. ¿Cual es el numero maximo de perifericos que pueden conectarse, si cada uno de ellos
utiliza 32 direcciones
------------------------------------------------------------------------------------------------------

    Tenemos 2^20 lineas de direccion ==> 1048576
    le restamos la rom y la ram ==> - 655360 - 131072 
                                    ------------------
                                            262144

    Ese espacio nos queda, ahora como cada uno usa 32 lo dividimos y nos da ==> 8192 ==> 2^13


------------------------------------------------------------------------------------------------------
Un computador con 15 lineas de direcciones tiene 3 modulos de memoria de 2^13 palabras y utiliza E/S 
mapeada en memoria ¿Cuál es el numero maximo de perifericos que pueden conectarse, si cada uno de ellosutiliza 
8 direcciones
------------------------------------------------------------------------------------------------------

    Tenemos 2^15 lineas de direcciones ==> por lo tanto tenemos 32768           32768 - 24576 = 8192
    Restamos 3 modulos de memoria de 2^13 ==> - 8192 x 3                
    Ahora tenemos 8192 y como cada periferico utiliza 8 direcciones ==> 1024 ==> 2^10




------------------------------------------------------------------------------------------------------
Se dispone de un computador cuyo tiempo medio de acceso al sistema de memoria cache y memoria principal es de 18 ns.
 Si la tasa de fallo de la cache es de 0,2 y el tiempo de acceso a la memoria principal es 50 ns. 
 ¿Cuál es el tiempo de acceso a la cache?
------------------------------------------------------------------------------------------------------
    tiempo medio de acceso a la jerarquia = probAcierto×tiempoAcierto + probFallo×TiempoFallo

    8 ns            ( NI PUTA IDEA)




------------------------------------------------------------------------------------------------------
En un computador con una jerarquía de memoria de dos niveles se observa experimentalmente que el tiempo 
medio de acceso a la memoria es de 300 ns cuando en realidad el tiempo medio de acceso al primer nivel 
es de 6 ns. Sabiendo que el tiempo de acceso al segundo nivel es de 3 microsegundos, ¿cuál sería aproximadamente
 el porcentaje de fallos en los accesos al primer nivel?
------------------------------------------------------------------------------------------------------

    tiempo medio de acceso a la jerarquia = probAcierto×tiempoAcierto + probFallo×TiempoFallo
    300 ns = 6 ns + % fallo * 3 microsegundos ;

    fall0 = 294 ns / 3000 ns ==> 0.098 ==> 0.1 ==> 10%


------------------------------------------------------------------------------------------------------
Un computador emplea un sistema de memoria principal de 128 palabras y una memoria caché de 32 palabras. 
La organización de la memoria caché es totalmente asociativa y el tamaño de bloque es de 8 palabras.
 Se emplea el algoritmo de reemplzao FIFO. Si inicialmente la memoria caché está totalmente vacía, 
 calcule el número de fallos cuando se lee la secuencia de direcciones de la memoria principal:
 0000100, 1000001, 0000101, 0010011, 0100010, 1000100, 0000111.
------------------------------------------------------------------------------------------------------
    000 0100 ==> fallo y me traigo ==>  [0,7] 
    100 0001 ==> fallo y me traigo ==>  [64,71]
    000 0101 ==> Acierto
    001 0011 ==> fallo y me traigo ==> [16,23]
    010 0010 ==> fallo y me traigo ==> [32,39]
    100 0100 ==> Acierto
    000 0111 ==> Acierto

------------------------------------------------------------------------------------------------------
¿Cuántas líneas de dirección (patillas) son necesarias para direccionar un chip de memoria DRAM de 16M x 16?
------------------------------------------------------------------------------------------------------


    
    16M = 2^24. Multplexamos 12+12. Por tanto 12 HDLGP


------------------------------------------------------------------------------------------------------
En un sistema Linux IA32, ¿cuántos enteros se podrían almacenar en una línea de cache, si la cache del procesador fuera de 4 KB, 
asociativa por conjuntos de 4-vías, y contuviera 4 conjuntos?
------------------------------------------------------------------------------------------------------

    Si tenemos 4 vias es como si tuvieramos 4 caches de 1k
    un conjunto son las 4 "oportunidades" de una línea

    Cada linea ==> 2*10 / 2^2 ==> 2^8

    Cada int ==> 2^2 ====> 2^8      
                        --------  ==> 2^6 ==> 64 ints 
                        2^2

------------------------------------------------------------------------------------------------------
El primer nivel de una jerarquía de memoria tiene una tasa de aciertos del 80% y las peticiones de memoria tardan 15 ns en
completarse si dicha posición se encuentra en ese nivel y 100 ns si no es así. ¿Cuál es el tiempo medio de acceso de la jerarquía?
------------------------------------------------------------------------------------------------------
probAcierto×tiempoAcierto + probFallo×TiempoFallo

    0.8*15 + 0.2*100 =>  32 ns


------------------------------------------------------------------------------------------------------
* En un sistema con direcciones de 32bits, memoria de bytes, cache de 1MB asociativa por conjuntos de 4 vías y líneas de 64B, 
el campo etiqueta en el formato de dirección cache es de.
------------------------------------------------------------------------------------------------------
    
    |-----------------32-----------------|

    lineas de 64 B = 2^6 B 
    cache de 1 MB = 2 ^20 B
    vias = 2^2 vias = 2^2 lineas/conjunto

    2 ^20 / 2^ 6b/linea ==> 2^14


    2^14 lineas
    -----------     =====> 2^12 conjuntos
    2^2 lineas/conjunto



    |------14------|---12------|--6--|
        etiqueta     conjunto     byte
        marca                     offset 
        tag                        desp.




    Se hace directamente asi        

    2^20 B              1 Conjunto
    ------          x   -----------    2^12 Conjunto
    2^6 B/linea          2^2 lineas


------------------------------------------------------------------------------------------------------
* Un módulo de memoria de 16 GB está formado por varios chips DRAM de 1024Mx4. ¿Cuántos chips DRAM necesita el módulo?
------------------------------------------------------------------------------------------------------
            +---+
    1024  |   |
            +---+  
            4
            
    2^30 * 2*2 bits/circuito = 2^32 bits/circuito

    16 GB = 2^34 B = 2^34*2^3 bits = 2^37 bits

    2^37 bits
    ---------           = 2^5 circuitos
    2^32 bits /circuito


------------------------------------------------------------------------------------------------------
* ¿Cuál de las siguientes expresiones toma el valor de 0x01 si x es múltiplo de 32 y 0x0 en caso contrario? 
------------------------------------------------------------------------------------------------------
Asumir unsigned int. Las expresiones son
Los multiplos de 32 acaban en 
00000

 a) (x & 0x1f) 
    yyyyyxxxxx
    0000011111
    ----------
    00000xxxxx  == 0  <==> xxxxx == 0
                !=0   <==> xxxxx != 0


 b) !(x & 0x1f) 
    yyyyyxxxxx
    0000011111
    ----------
    00000xxxxx  == 0  <==> xxxxx == 0 ==> !0 ==1
                != 0  <==> xxxxx != 0 ==> !(distinto de cero) == 0       Esta es la respuesta

 c) (x | 0x3f) 
 d) !(x | 0x3f) 


------------------------------------------------------------------------------------------------------
* Sea un formato de microinstruccion que incluye dos campos independientes de 9 bits cada uno.
Si se rediseña de modo que se solapen los dos campos. ¿ Cuantos bits se ahorran en cada microinstruccion ?
------------------------------------------------------------------------------------------------------------
Se ahorran 8 acabar este desde la foto
+-----+-----
    9    9
+-----+-----


--------------------------------------------------------------------------------------------------------------------------
* Un procesador x86 a 4GHZ dispone de 7 unidades de ejecucion en paralelo, con 20 etapas de segmentacion y es capaz de emitir
( comenzar a ejecutar ) 4 instrucciones en cada ciclo de reloj ¿ Que velocidad aproximada de ejecucion sera capaz de alcanzar en MIPS ?
--------------------------------------------------------------------------------------------------------------------------
4 x 4 == > 16..



Ha quitao memoria asociativa

¿ cual seria la primera microinstruccion para llevarnos un registro a la memoria  MBR = a nose que...
cual de las siguientes microinstrucciones tendría que ser la primera...

----------------------------------------------------------    
* Para construir una DRAM de 4GBytes con chips de 512x4bit hacen falta:
----------------------------------------------------------
512x1024x1024 = 536870912 bits
-------- ----
   k     bit
 
 536870912 bits x 4 bits = 2^31 bits
 
 4GBytes = 2^32 bytes = 2^35 bits
                        ----------
                        2^32 + 2^3 = 2^35
                               ---
                               8 bit
N de chips = 2^35 / 2^31 = 2^4 = 16 chips

* Cuantas patillas de dirección tiene una memoria DRAM de 1G palabra, siendo la longitud de palabra 16 bits?

1G palabra = 2^30 palabras

30/2 = 15 patillas

Y con la SRAM? 30 patillas

----------------------------------------------------------
* Ejemplo Examen Memoria
----------------------------------------------------------
microprocesador AMD Ryzen Threadripper 1950x de 16 nucleos

Tamaño de Linea 64 KB = 2^6 Bytes

              -- 16x64KB 4 vias (instrucción)
L1 cache size:| 
              -- 16x32KB 8 vias (datos)
    
L2 cache size: 16x512KB 16 vias (share)
    
L3 cache size: 4x8MB 16 vias (share)

Memoria física: 1TB = 2^40 Bytes

L1: tamaño Instrucciones = 2^16 Bytes
    tamaño Datos = 2^15 Bytes 
    
a) Dirección fisica de memoria principal desde el punto de vista de una L1 de Instrucciones
                4D
---------------------------------------
|      Etiqueta     | Conjunto | Byte |
---------------------------------------
       26                 8        6
    
T.cache                 2^16
-------  = N lineas     ----- = 2^10 Lineas
T.lineas                 2^6

   N Lineas                       2^10
--------------- = N conjuntos     ----- = 2^8 Conjuntos
Lineas/Conjunto = vias             2^2

-> Tamaño total en bits ocupado por todas las etiquetas en L1 (instrucciones)

N lineas x bits (etiqueta) = 2^10 * 26 bits = 26624 bits x 16 nucleos = 425984 bits

-> Tamaño total en bits ocupado por todas las instrucciones en L1 (instrucciones)
T.cache L1 * 16 nucleos * 8 bits = 2^16 * 16 * 8 = 8388608 bits

-> Porcentaje de espacio ocupado por etiqueta respecto a instrucciones en L1
T.T.O. por las etiquetas      425984
--------------------------- = ------- = 0.05078 --> 5.078%
T.T.O por las instrucciones   8388608
    
-> para calcular Dirección fisica de memoria principal desde el punto de vista de una L1 de (Datos) hacer lo mismo que para la de instrucciones a)


















¿cuantos bits tendria noseque cache...==> obsoleto
