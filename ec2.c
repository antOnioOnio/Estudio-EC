¿cuantos bits tendria noseque cache...==> obsoleto


*En un sistema con direcciones de 32bits, memoria de bytes, cache de 1MB asociativa por conjuntos de 4 vías y líneas de 64B, 
el campo etiqueta en el formato de dirección cache es de.

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


*Un módulo de memoria de 16 GB está formado por varios chips DRAM de 1024Mx4. ¿Cuántos chips DRAM necesita el módulo?

        +---+
  1024  |   |
        +---+  
          4
          
2^30 * 2*2 bits/circuito = 2^32 bits/circuito

16 GB = 2^34 B = 2^34*2^3 bits = 2^37 bits

2^37 bits
---------           = 2^5 circuitos
2^32 bits /circuito


*¿Cuál de las siguientes expresiones toma el valor de 0x01 si x es múltiplo de 32 y 0x0 en caso contrario? 
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



*Sea un formato de microinstruccion que incluye dos campos independientes de 9 bits cada uno.
Si se rediseña de modo que se solapen los dos campos. ¿ Cuantos bits se ahorran en cada microinstruccion ?

+-----+-----
    9    9
+-----+-----



*Un procesador x86 a 4GHZ dispone de 7 unidades de ejecucion en paralelo, con 20 etapas de segmentacion y es capaz de emitir
( comenzar a ejecutar ) 4 instrucciones en cada ciclo de reloj ¿ Que velocidad aproximada de ejecucion sera capaz de alcanzar en MIPS ?

4 x 4 == > 16..



Ha quitao memoria asociativa

¿ cual seria la primera microinstruccion para llevarnos un registro a la memoria  MBR = a nose que...
cual de las siguientes microinstrucciones tendría que ser la primera...

