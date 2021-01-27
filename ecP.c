En la práctica "media" se desea invocar desde lenguaje ensamblador la función printf() de libC. Eso implica que este programa, como todo programa que use libC,

    ==> es ventajoso para enlazarlo usar gcc, y entonces es conveniente que contenga main (aunque ambas cosas son opcionales)

*En x86_64 se pueden referenciar los registros
    ==> %rax, %eax, %ax, %ah, %al

*¿Cuál de las siguientes afirmaciones es falsa respecto al lenguaje C (en convención cdecl x86)?
    ==> ¿Cuál de las siguientes afirmaciones es falsa respecto al lenguaje C (en convención cdecl x86)?
    Por tanto son true:
        	
        ==> Los parámetros se introducen en la pila en el orden inverso a como aparecen en la llamada de C, es decir, 
            empezando por el último y acabando por el primero
        ==>Pasar a una función un puntero a una variable se traduce en introducir en la pila el valor de la dirección
            de memoria donde está almacenada la variable
        ==> Al llamar a una subrutina o función se introducen los parámetros en la pila y después se realiza una llamada a la subrutina
*En la práctica de E/S en Arduino, DDRB es ==> el registro de dirección de datos del puerto B

*Habiendo definido en código fuente ensamblador saludo: .ascii "Hola mundo\n", si comparamos los comandos gdb siguientes: x/s &saludo 
    frente a print (char*) &saludo, se puede decir que:
    ==> ambos nos muestran el string (el mensaje “Hola mundo”)

*Si ECX vale 0, la instrucción adc $0,%ecx
    ==> Pone CF=0

*¿Qué modificador (switch) de as hace falta para ensamblar una aplicación de 32bits en un sistema de 64bits en el que se ha instalado también el    
 compilador de 32bits?
    ==> -32
    Para LD sería ==> -m elf_i386

*¿Cuál es el popcount (peso Hamming, nº de bits activados) de una lista de N números inicializada con los valores 0..N-1?
    ==> si N es potencia de 2, (log_2(N)*N)/2
*En la práctica de E/S en Arduino, la instrucción CBI del repertorio del microcontrolador realiza…
    ==>una operación de bits
*Sea un computador de 32 bits con una memoria cache L1 para datos de 32 KB y líneas de 64 bytes asociativa por conjuntos de 2 vías. Dado el siguiente fragmento de código:

    int v[262144];
    for (i = 0; i < 262144; i += 2)
    v[i] = 9;

    ¿Cuál será la tasa de fallos aproximada que se obtiene en la primera ejecución del bucle anterior?
    1/8 (un fallo por cada 8 accesos) ==> es un array de ints (4B) y se salta i+=2, los accesos están separados 8B y las líneas son de 64B, los accesos 
    con índice i múltiplo 8x son fallos, el resto son aciertos.

*En la práctica de la cache, el código de “size.cc” accede al vector saltando de 64 en 64. ¿Por qué?
    ==> Para anular los aciertos por localidad espacial, esto es, que sólo pueda haber aciertos por localidad temporal

*En la práctica de la bomba, el tercer ejercicio consistía en usar un editor hexadecimal para crear un ejecutable sin “explosiones”. 
    Para saber qué contenidos del fichero hay que modificar, se puede utilizar… (marcar la opción *falsa*)
    ==> hexedit

*En la práctica de cache hemos hecho una gráfica con el código size.cc ¿Qué forma tiene la gráfica que se debe obtener?
    ==> Una escalera con varios tramos horizontales
*En X86-64, el registro contador de programa se denomina:
    ==> RIP

*En la práctica "media" se pide como ejercicio previo sumar una lista de N enteros en doble precisión. Alguna de las siguientes técnicas no 
está relacionada con la aritmética en doble precisión:
    ==> a. acumulación de desbordamientos (OF, overflow flag)

*En la misma práctica "media", el programa esqueleto ofrecido (suma.s) no es válido, en concreto... (marcar la opción FALSA)
    ==> no está preparado para sumar más de 9 elementos

*La función setup() de Arduino es llamada:
    ==> Cuando se conecta la alimentación a la placa, se pulsa el botón de reset, o se sube desde el entorno de desarrollo

*La línea de código ensamblador: mov $msg, %rsi
    ==> Copia en rsi los 64 bits de la dirección msg.

*. ¿Cuál de las siguientes líneas declara un puntero a función en C?
    ==> int (*func)();
*. Si val es una variable de tipo unsigned long, entonces la sentencia: val += (val >> 32);
    ==> Su traducción incluye una instrucción shr seguida de una suma.

* Las resistencias utilizadas en la práctica de Arduino
    ==> Son de color azul claro y tienen 5 bandas de color: las 3 primeras indican un valor, la 4ª banda es un multiplicador y 
    la 5ª banda es la tolerancia
 *En el programa line.cc, si para cada tamaño de línea (line) recorremos una única vez el vector, la gráfica resultante es decreciente porque:
    ==> Cada vez que line aumenta al doble, realizamos la mitad de accesos al vector que para el valor anterior