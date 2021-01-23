//=========
Tema 1
//=========

//----
Registros
    *Tipo de registros PC y SP, no son de uso general
    *El tamaño del contador de programa depende del numero de direccionens de memoria
    *El registro MDR/MBR contiene el valor que va a ser almacenado en la memoria, o bien se usa para recibir un valor procedente de la memoria
    *Justo antes de que una instrucción máquina escriba un resultado en memoria: en MBR está el resultado y en MAR la dirección donde se almacenará
    *¿Cuál de los siguientes registros se utiliza para guardar la dirección de memoria donde se localiza la instrucción siguiente? Progam counter
    *El registro RDM (MAR en inglés) contiene la última instrucción o dato leído de memoria o el dato que se va a escribir en memoria. fucking false
    *Una CPU con bus de direcciones de 16 bits y bus de datos de 8 bits tiene un registro de 8 bits conectado al bus de datos y a la unidad de control.
     Puede tratarse del registro de instruccion
    *¿Cómo actúa el indicador N del registro de indicadores de estado?	Se pone a 1 cuando el resultado es negativo.


     PROPOSITO GENERAL===> e
     
        
     ax, ecx, edx, ebx, esi, edi, esp, ebp
//----
El tito Von
    *Von neuman no utiliza el modelo de programa externo
    *Von Neumann existe un mismo espacio de memoria para datos y para programa ==> fucking true
    *Von Neumann usa modelo de programa almacenado
    *Von Neumann el programa se encuentra residente en memoria.
    *Von Neumann la CPU no puede determinar si una posición de memoria contiene una palabra de instrucción o una palabra de dato.
    *El computador EDVAC, propuesto por John Von Neumann, presentaba dos importantes diferencias respecto al ENIAC: Empleaba aritmética 
     binaria y permitía trabajar con un programa almacenado.
    *La separación entre almacenamiento y unidad de procesamiento es una de los ideas contempladas en la arquitectura Von Neumann.
    *En una arquitectura Von Neumann cada pgalabra de memoria contiene un campo que permite diferenciar entre instrucción o dato.

//----
Arquitectura
    *true El concepto de " ventanas de registro solapadas" es un mecanismo eficiente de llamada/retorno de procedimientos, utilizado en el procesador
    RISC-I
    *En el RISC-I, una ventana de registros contiene, entre otros registros=>registros para recibir parámetros del procedimiento llamador
    *true En el RISC-I una ventana de registros contiene registros para recibir parámetros del procedimiento llamador, registros para almacenar variables 
    *En el RISC-I una ventana de registros contiene registros para recibir parámetros del procedimiento llamador, registros
    *true Los procesadores RISC no tiene instrucciones para sumar un registro con una posición de memoria.
    *true La relación entre tiempo de ejecución de un programa escrito en ensamblador y el mismo escrito en un lenguaje 
    de alto nivel es más alta en RISC que en CISC.
    *true Los compiladores pueden generar código más fácilmente, y también código más eficiente, para conjuntos de instrucciones tipo RISC.
    *true Un diseño CISC pretende disminuir el número de instrucciones a ejecutar por un programa, 
     mientras que uno RISC pretende disminuir el número medio de ciclos por instrucción
    *En una arquitectura RISC típica: se usan muchas instrucciones de las disponibles en el conjunto de instrucciones.
    *En una arquitectura RISC típica: suele usarse segmentación
     para almacenar variables locales y registros para enviar parámetros a procedimientos.
    *false Los RISC tienden a requerir menos memoria para un programa que los CISC debido al uso de instrucciones menos potentes. 
    *La idea de la arquitectura RISC se debe, entre otros, al tito John Cocke
    *false En los procesadores RISC todas las instrucciones son del tipo registro-registro, exceptuando las de movimiento de datos entre registros.
    *true Las arquitecturas RISC son del tipo registro-registro
    locales y registros para enviar parámetros a procedimientos.
    *true SUB R0,R0,R0 podría usarse en algunos procesadores RISC como instrucción de no-operación.
    *El objetivo de un diseño CISC es disminuir el número de instrucciones a ejecutar por un programa
    *La idea de desarrollar máquinas CISC surgió para tener instrucciones cercanas al lenguaje de alto nivel.
    *En los procesadores CISC gran parte del área del chip se consume en la unidad de control true
    *¿Qué arquitectura se caracteriza por presentar una gran variación en la longitud de las instrucciones? memoria-memoria
    *false En una arquitectura little-endian el código de operación aparece al final de la instrucción
    *En las arquitecturas RISC hay muchos registros y pocos modos de direccionamiento

//----
Generaciones:
    Tercera
        microprogramación
        memoria virtual 
        circuitos integrados

    Cuarta
        memorias semiconductores 

*funciones de la unidad de control--> el secuenciamiento de las instrucciones maquina

*El ancho de palabra de una memoria corresponde a: La longitud del registro de datos de la memoria.
*El ancho de palabra de una memoria corresponde a: La cantidad de bits que caben en una sola posición

*En un sistema con dos buses separados, uno para el subsistema de memoria y otro para la E/S el bus que une la
 memoria y el procesador suele funcionar a la velocidad de la memoria

*El espacio direccionable de memoria de un computador depende del diseño del: Bus de direcciones

*Una computadora puede funcionar prescindiendo de un puto acumulador
	
*Todas las instrucciones deben tener operando fuente y operando destino ==> false

*La ecuación básica de rendimiento calcula cuánto tiempo tarda en ejecutarse un programa concreto conociendo su número de instrucciones y 
el número de etapas (promedio) y la frecuencia del procesador



//=========
//=========
Tema 2


//----
Lenguaje C
    * El tamaño de un puntero en c cambia de IA32 a x86-64
    * Pasar a una función un puntero a una variable se traduce en introducir en la pila el valor de la dirección de memoria donde está 
      almacenada la variable
    * En lenguaje C, al llamar a una subrutina o función se introducen los parámetros en la pila y después se realiza una llamada a la subrutina
    * Los parámetros se introducen en la pila en el orden inverso a como aparecen en la llamada de C, es decir, empezando por el último y acabando por
     el primero
    * Pasar a una función un puntero a una variable se traduce en introducir en la pila el valor de la direccion de memoria donde 
    esta almacenada la variable
    * false Antes de volver de la rutina llamada, el programa en C se encarga de quitar de la pila los parámetros de llamada realizando varios pop
    * do-while se traduce muy directamente a lenguaje ensamblador
    * Para traducir una construcción if-then-else de lenguaje C a lenguaje ensamblador, gcc utiliza generalmente 
    un salto condicional, según la condición opuesta a la del código C, y otro salto incondicional

//----
IA32/x86-64
    * En IA32 el puntero de pila es un registro de 32 bits en el microprocesador
    * Primer procesador de intel de 64 bits familia x86--> pentium 4F
    * El ajuste de marco de pila que gcc (Linux/IA-32) prepara para todas las funciones consiste en las instrucciones 
        pushl %ebp
        movl %esp, %ebp
    * La zona roja en x86-64 Linux es una zona bajo (RSP) (adonde apunta RSP) que una función puede usar sin reservarla, 
      pero sólo si no llama a ninguna otra función mientras la usa
    * La convención de llamada Linux/GCC IA32 considera, respecto a convenios de uso de registros: 3 registros salva-invocante, 
      3 registros salva-invocado, y 2 especiales
    * false El 8086 puede funcionar en modo supervisor y en modo usuario. 
    * En el 8086, la dirección fisica de la instruccion que se va a captar vendrá dada por CS * 10h +IP

    * DIFERENCIAS:
        -los punteros (void*) pasan de 32 a 64 bits
        -los enteros largos (long) pasan de 32 a 64 bits
        -false --> el tipo double pasa de 4 B a 8 B
        -los enteros largos (long) pasan de 32 a 64 bits
        -long double pasa de 10/12 B a 16 B

//----
Ensamblador y mierdas   
    *Un procesador cuya instrucción CALL guarda la dirección de retorno en un registro:No permite llamadas anidadas ni recursivas.
    *Para poner a 1 el bit 5 del registro %edx sin cambiar el resto de bits podemos usar la instrucción máquina or $0x20, %edx
    *¿Cuál es la diferencia entre las instrucciones subl y cmpl? subl almacena el resultado sobreescribiendo uno de los operandos y cmpl no
    *La instrucción seta %al (seta significa "set if above"): Pone AL a 1 si CF=0 y ZF=0
    *La instruccion leave No es obligatorio usarla. En su lugar puede realizarse una secuencia explícita de operaciones mov y pop
    *La instrucción leave hace exactamente lo mismo que mov %ebp, %esp; pop %ebp
    *Por convención cuando devolvemos el valor de retorno de una función al terminar, se guarda en %eax 
    *La instrucción IA32 test sirve para Realizar la operación and lógico bit-a-bit (a&b) pero no guardar el resultado, sino simplemente ajustar los flags
    *false La instrucción CMP realiza la operación XOR sin almacenar el resultado.
    *false Las instrucciones máquina más frecuentes en programas típicos son las de transferencia de datos para análisis estáticos y las aritméticas 
    para análisis dinámicos.
    * Las instrucciones en lenguaje maquina se almacenan y tratan como cadenas de unos y ceros
    *false La instrucción SKIP pone a 0 un registro o posición de memoria si se cumple una condición.
    *¿Cuál es la diferencia entre las instrucciones mov y lea? mov referencia (accede) la posición indicada, mientras que lea no lo hace
    *¿Dónde está ubicado el primer argumento a una función (suponer código ensamblador cdecl generado por gcc para Linux/x86) 
    imediatamente después de ejecutar la instrucción call? ==> 	%esp + 0x4
    * false Las instrucciones máquina más frecuentes en programas típicos son las aritméticas.
    *La instrucción cmovb %edx, %eax copia en %eax el contenido de %edx si el indicador de acarreo es 1
    *Cuando se ejecuta la instrucción ret al final de una subrutina:la dirección almacenada en la cima de la pila se transfiere al contador de programa
    *En un sistema x86-64, si %rsp tiene el valor 0x7fffff0000 inmediatamente antes de ejecutar una instrucción retq, 
    ¿cuál es su valor inmediatamente después? ==> 0x7fffff0008
    *false Se llama bit slice a la operación de desplazamiento de bits que realiza una instrucción SHL o SHR
    *XOR ==> hace complemento a 1, cambia 1 por 0 y baisevers
    *¿Cuáles de las siguientes instrucciones utilizan sólo direccionamiento implícito? lahf, movs
    *false CALL ETIQUETA guarda en la pila la dirección de retorno y el registro de indicadores
    *Al traducir de lenguaje C a ensamblador, gcc en máquinas Linux/IA-32 almacena (reserva espacio para) una variable “var” local a una función “fun” en 
    una dirección de memoria referenciable (en lenguaje ensamblador) como  -k(%ebp), siendo k un número constante positivo relativamente pequeño
    *false El programador de lenguaje ensamblador necesita conocer la microarquitectura del ordenador

//----
Direccionamiento:
    *¿Qué tipo de direccionamiento se usa para el registro destino en la instrucción IA32 add array(,%ebx,4), %edx? Direccionamiento a registro
    *El direccionamiento directo a memoria utiliza un desplazamiento.
    *false El direccionamiento implícito requiere un único campo de dirección de operando.
    *trueEl direccionamiento a registro es similar al directo. La diferencia es que el campo de direcciones referencia un registro en lugar de una 
    dirección de memoria
    * Push no utiliza un modo de direccionamiento implicito
    * true En un computador cuya pila "crece" hacia direcciones menores se puede simular la instrucción PUSH con una instrucción 
    MOV con direccionamiento indexado con preautodecremento a través del registro SP.
    * En el direccionamiento inmediato, tras captarse completamente la instrucción se accede al operando, que es una constante contenida 
    en la propia instrucción.
    * true En el modo de direccionamiento registro (o directo a registro) el objeto direccionado se encuentra almacenado en uno de 
    los registros programables.
    * true  Un ordenador que únicamente emplee direccionamiento directo o absoluto no permitirá escribir programas relocalizables.
    * true La instrucción ADD Rn,#3 utiliza dos modos de direccionamiento: directo a registro e inmediato.
    * En el direccionamiento indirecto a través de registro, la dirección efectiva…se encuentra en un registro general del procesador.
    * true El direccionamiento relativo a contador de programa favorece la implementación de código reubicable.
    * false Si una pila crece hacia direcciones de memoria decrecientes, una instrucción PUSH utiliza 
    direccionamiento indexado con postautodecremento, siendo SP el registro índice.
    * true El direccionamiento inmediato no es más lento que el direccionamiento directo.
    * PUSH utiliza un modo de direccionamiento no implicito
    *true El direccionamiento indirecto a través de registro es más rápido que el indirecto a través de memoria.
    *En el direccionamiento inmediato:
        true el tamaño (rango de valores) de la constante esta limitado
        false una vez captada y decodificada la instruccion, se accede a memoria para obtener el valor del operando
        false el codigo de operacion indica el operando afectado


* false Una de las diferencias entre el 8086 y el 8088 es que este último no dispone de BIU ("Bus Interface Unit").
* La diferencia entre el flag de acarreo y de overflow es que ambos se recalculan tras cada operación aritmético-lógica con ints, correspondiendo 
    al programador consultar uno u otro según piense que sus datos son con o sin signo
* true En las instrucciones aritméticas con dos operandos de un procesador con arquitectura de pila, los dos operandos, implícitos, 
    son la cima de la pila y el elemento siguiente de la cima de la pila.
* true Las instrucciones de E/S consituyen menos del 5% de las instrucciones ejecutadas en un ordenador.
* true La instrucción TEST_AND_SET comprueba si la posición de memoria especificada como operando vale 0 y a continuación la pone a 1, 
    todo ello sin posibilidad de interrupción
*Las instrucciones de salto complican el diseño eficiente de los procesadores segmentados.
* true Más de la cuarta parte de las instrucciones máquina que se ejecutan en un programa típico son de movimiento o transferencia de datos.
* false La codificación Huffman no es la más utilizada debido a que el tamaño promedio del código de operación no es mínimo.
* true  El Pentium III es superescalar porque permite "emitir" varias instrucciones por ciclo de reloj.
*Si tenemos un número n, de 64 bits, almacenado en la pareja de registros EDX:EAX
    (EDX contiene los 32 bits más significativos y EAX los 32 bits menos significativos) y queremos realizar la división n / (2^32) entonces:
    Podemos quedarnos con EDX tanto si n es un número con signo como sin signo.Cocientes positivos o sin signo redondeados hacia cero, cocientes negativos redondeados hacia más negativo: es decir, redondeado siempre hacia inferior.
    No es la división entera estándar de C (que redondea hacia cero) pero el enunciado tampoco lo exige.
*false En el 8086, si tras una instrucción de comparación CMP A,B aparece una instrucción JC, ésta realiza un salto si A > B,
siendo A y B números sin signo.
*true Una arquitectura de registros de propósito general puede tener instrucciones máquina de la ALU con un único operando explícito.
* Una sentencia en C del tipo “while (test) body;” puede transformarse en código “goto” como: if (!test) goto done; loop: body; if (test) goto loop; done:
*true La diferencia entre un analaisis estatico y uno dinamico sobre la frecuencia de utilizacion de las instrucciones maquina es que el estatico recuenta sobre
el listado y el dinamico contabiliza las repeticiones debidas a bucles, etc.




 //=========
//=========
Tema 3
*Ahorro de memoria con nanoprogramacion ==> n(palabras) * w bits - ( n(palabras)[log2 m(diferentes)] + m(diferentes)*w bits)

*true En la actualidad todos los microprocesadores utilizan pipeline, tanto RISC como CISC.
*true La unidad de control de un procesador segmentado (con "pipeline") debe ser capaz de chequear las dependencias de datos entre instrucciones.
*false Se puede asegurar que un microprocesador que utilice segmentación ("pipeline"), trabajando a una frecuencia de reloj de 100 MHz, ejecutará 100 MIPS.
*Un computador usa el formato vertical de codificación de instrucciones para parte de las señales de control y el
    formato horizontal para k señales de control. El formato vertical posee n campos codificados de m bits cada uno. 
¿Cuál es el máximo número de señales de control que pueden usarse en este computador? ==> k + n•(2^m - 1)
*Los riesgos de datos consisten en que una instrucción necesita un dato calculado por otra anterior
*false No es posible diseñar una unidad de control cableada de manera semiautomática.
*En el pseudocódigo usado para representar las microinstrucciones, la expresión “goto f(IR)”:Salta a una dirección de memoria de 
    control que depende de la instrucción máquina actual
*¿Qué circuito suele utilizarse para traducir el código de operación de una instrucción máquina a dirección de comienzo en la 
    memoria de control del microprograma correspondiente?==> Una memoria.
*true Un programa con muchas bifurcaciones hace que no se aprovechen al máximo las prestaciones del pipeline.
*La salida de un campo del registro de microinstrucción que solapa dirección de salto y algunas señales de control han de conectarse a:
    un demultiplexor controlado por el tipo de salto
*false El secuenciamiento de una unidad de control microprogramada debe ser implícito.
*true La anchura de la memoria de nanoprograma es la misma que la de memoria de microprograma en un diseño de la misma unidad 
    de control que no usara nanoprogramación.
*false El objetivo del control residual es aumentar la velocidad de ejecución de microinstrucciones,
    aunque esto tiene el inconveniente de aumentar el tamaño del microprograma. Es false porque es optimizar el tamaño del microprograma.
*Son funciones de la unidad de control:==> el secuenciamiento de las instrucciones máquina
*true En general, un operación segmentada ("pipelined") requiere el mismo tiempo o más, desde el principio hasta el fin y para un único par de operandos, 
    que la misma operación en una implementación no segmentada
*false Un microprocesador es superencauzado ("superpipelined") si permite la emisión de dos o más instrucciones en un mismo ciclo de reloj.
*true Conectando cuatro "datapaths" bit-slice de 4 bits cada uno y una unidad de control de 16 bits se puede construir una CPU de 16 bits
*Los procesadores comerciales con unidad de control microprogramada suelen almacenar los microprogramas…en una rom
*false Si se solapan cuatro campos de las microinstrucciones de una unidad de control se necesita un campo adicional de dos bits y
    un multiplexor de 4 a 1 para separar las señales.
*Sea un formato de microinstrucción que incluye dos campos independientes de 9 bits cada uno. Si se rediseña de modo que se solapen los dos campos, 
    ¿cuántos bits se ahorran en cada microinstrucción? 8
*Opciones basicas de la UC :
    -> Transferir un registro a otro
    -> (Leer o escribir) un registro (de / a) memoria
    -> Realizar operación ALU y guardar resultado en registro
    -> false (Guardar o recuperar) un registro (en / de) la pila

*¿Cuál de los siguientes grupos de señales son entradas a la unidad de control? Los bits del registro de indicadores (flags)
*No en todas las instrucciones máquina hay una fase de captura de operandos
*true Debido al pequeño número de operaciones simples, la sección de control de un procesador RISC puede ser cableada en lugar de microprogramada.
*true En el secuenciamiento de microinstrucciones explícito cada microinstrucción incluye la dirección de la microinstrucción siguiente
*En la captación de un operando que reside en memoria: en MAR indicamos la dirección donde está y en MBR lo recogemos
*Respecto a MBR y MAR==> MAR requiere menos señales de control que MBR; sólo una (LoadMAR), frente a 4 de MBR (Load/Enable Mem/Bus)
*true Una ventaja de la realización de una unidad de control cableada mediante una PLA en lugar de 
    utilizar componentes LSI es su mayor facilidad de diseño y fiabilidad.
*Microprogramacion horizontal==> ninguna o escasa codificacions
*Para conectar las salidas de dos registros hacia un bus común en el datapath... se pueden usar dos buffers triestado.
*true En una microinstrucción que hace uso del registro de control residual, el contenido de éste normalmente se interpreta como señales de control.
*¿En qué registro está contenido el último dato (o instrucción) leído de memoria, o el dato que se va a escribir en memoria? en el MBR broda
*El campo tipo de secuenciamiento indica al generador de direcciones de una unidad de control microprogramada el mecanismo de cómputo de la EA del 
    operando de la instrucción.