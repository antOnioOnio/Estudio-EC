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

*¿Qué sentencia usamos en el programa blink (led intermitente) para encender el led integrado en la placa Elegoo Mega2560?
    ==>digitalWrite (LED_BUILTIN, HIGH);

*Una función C llamada get_el(…) genera el siguiente código ensamblador.

    leaq    (%rdi,%rdi,4), %rax
    addq    %rax, %rsi
    movl    arr(,%rsi,4), %eax
    ret

    ==> arr es un array bidimensional de enteros, con cinco columnas

*La instrucción cmovb %rdx, %rax
    ==> copia en %rax el contenido de %rdx si el indicador de acarreo es 1
        sí, "below" equivale a CF
*Las microoperaciones de la fase de captación de una instrucción:
    ==> Son comunes para todas las instrucciones

*En la convención de llamada SystemV AMD64 seguida por gcc Linux/x86-64…
    ==>R10 es un registro salva-invocante, por eso si es necesario hay que salvarlo antes de llamar a función
        sí, usualmente se protege moviéndolo a un salva-invocado


*¿Cuál de las siguientes instrucciones situada al principio de una función se utilizará
 probablemente para crear espacio en la pila para variables locales sin inicializar?
    ==> sub     $0x30, %rsp

*Habiendo definido en código fuente ASM longsal:.quad .-saludo justo detrás de un string saludo que ocupaba 28 bytes, si se comparan los 
    comandos gdb siguientes: x/1xg &longsal frente a print (long) &longsal:

    ==> el primero (x) nos muestra la longitud, y el segundo (print) nos muestra otro valor distinto
        el otro valor es la dirección de longsaludo, quitar & si se desea ver el valor con print, con x siempre se 
        usan direcciones (volcado de memoria)

*Si rcx vale -1, tras ejecutar las instrucciones
        rol $1, %cl
        rcr $2, %rcx
el nuevo valor de RCX y del flag CF es

    ==> RCX=-1, CF=1

*En el programa line.cc de la práctica de cache, si para cada tamaño de línea (line) recorremos una única vez el vector, la gráfica 
    resultante es decreciente porque:
    ==> el vector se indexa con la variable de control del bucle, con un incremento o paso de line
    el bucle es for (unsigned i = 0; i < bytes.size(); i += line), si line se duplica se realizan la mitad de accesos

*Para traducir una asignación condicional ( a= b ? c : d ; ) de lenguaje C a lenguaje ensamblador, gcc puede que utilice…
    ==> Una instrucción de movimiento condicional, pero sólo si el procesador es Pentium Pro/II o superior

*En la práctica de la cache, en size.cc se accede al vector saltando de 64 en 64. ¿Por qué?
    ==> Porque con un salto menor que 64 habría aciertos por localidad espacial y haría menos clara la gráfica
        sí, intentamos meter lo más rápidamente posible el vector en cache, para lo cual tocamos sólo un byte de cada línea.

*Para comprobar si el contenido del registro RDX es 0 (y posiblemente saltar a continuación usando la instrucción je), el compilador gcc genera:
    ==> testq %rdx, %rdx

*En una cache asociativa por conjuntos de 2^v vías con 2^b líneas (marcos de bloque) de 2^w palabras, el gestor de memoria no considera como campo
    (conjunto de bits contiguos con significado o relevancia) los siguientes bits:

    ==> bits  b…b+c-1 (siendo 2^c=nº conjuntos)

*Dada una función que devuelve la suma de 8 enteros en x86-64, ¿cuál de las siguientes instrucciones suma el 7º argumento?
    ==> add      0x8(%rsp), %eax

*Un procedimiento llamado por una instrucción call debe guardar y restaurar los registros siguientes siempre que los altere:

    ==> %rbx, %rbp
    ambos s-invocado
*En un sistema de interrupciones vectorizado y en daisy-chain, ¿cuál de las siguientes afirmaciones es cierta?
    ==> La gestión de prioridades queda establecida por el orden en que los dispositivos reciben la señal INTA y el dispositivo se identifica por un 
    dato que deposita en el bus
*Uno de los puntos clave de la traducción que gcc hace de una construcción switch-case de lenguaje C a lenguaje ensamblador es…
    ==> el salto indirecto
*El procesador utiliza el puntero de pila...
    ==>En las instrucciones de llamadas y retornos de subrutinas


Suponga que para la siguiente secuencia de direcciones enviadas a la cache: 0, 2, 4, 8, 16, 32, la tasa de acierto es 2/3.

    Me da la linea de 16 

    0, 2, 4, 8, 16, 32,
    
    0 x => [0, 31]
    2 => v
    4 => v
    8 => v 
    16 => v
    32 x





