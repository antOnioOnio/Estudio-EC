¿cuantos bits tendria noseque cache...==> obsoleto

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
    tag                         desp.




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

