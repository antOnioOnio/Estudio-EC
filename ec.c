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
    *¿Cómo actúa el indicador Z del registro de indicadores de estado?  Se pone a 1 cuando el resultado de una operación es 0


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
* El control residual se utiliza para: reducir el tamaño de la memoria de control


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
*false El campo tipo de secuenciamiento indica al generador de direcciones de una unidad de control microprogramada el mecanismo de cómputo de la EA del 
    operando de la instrucción.
*Una unidad de control microprogramada se denomina "con secuenciamiento de microinstrucciones explícito" según tenga o no tenga
    micro-contador de programa atacando a las líneas de dirección de la memoria de control
*¿Cuál de las siguientes funciones no corresponde a la unidad de control de un procesador?
    ==>Calculo de operaciones de coma flotante
    por tanto si   
        Secuenciamiento de las instrucciones
        Decodificación de las instrucciones
        Generación de las señales de control que provocan la ejecución de cada instrucción
*Alguna de las siguientes *no* es una operación básica de la unidad de control:
    ==>(Guardar o recuperar) un registro (en / de) la pila
    por tanto si   
        Transferir un registro a otro
        Realizar operación ALU y guardar resultado en registro
        (Leer o escribir) un registro (de / a) memoria

*false El incremento de velocidad de los RISC se consigue a costa de un aumento del área de chip dedicado a
    la unidad de control.

*false El área de chip utilizada por la unidad de control es menor en un CISC que en un RISC, al ser microprogramada en el primero.

*false Las unidades de control cableadas memorizan los pasos de ejecución de una instrucción máquina en una memoria de control,
    y las microprogramadas en una PLA.

*true En general, un operación segmentada ("pipelined") requiere el mismo tiempo o más, desde el principio hasta el fin y para un único par de operandos,
 que la misma operación en una implementación no segmentada.

*true En un camino de datos con un solo bus, para realizar la operación de copia de un registro r1 en un registro r2,
 es decir r2 ← r1, es necesario: Habilitar la salida triestado del registro r1 y activar la carga del registro r2
*true Se suelen utilizar PLA en las unidades de control cableadas. 
*false Usando chips bit-slice de 4 bits se pueden construir procesadores 4, 8 ó 12 bits, pero no más.




//=========
//=========
Tema 4


*true Un cauce ("pipeline") de instrucciones con 5 etapas tarda 7 ciclos de reloj o más en ejecutar 3 instrucciones si 
éstas utilizan las cinco etapas.
*Las instrucciones de salto...complican el diseño eficiente de los procesadores segmentados.
*Alguno de los siguientes NO es un motivo de que no se alcance la ganancia ideal en un cauce segmentado
    	==> La emisión múltiple (y posiblemente desordenada) de instrucciones
        ==> cola de instrucciones (precaptación)
        por tanto son motivos: ¿ Son motivos ?
            -El propio coste de la segmentación (carga de los registros de acoplo, etc...)
            -Los riesgos (hazards)
            -La duración del ciclo de reloj impuesta por la etapa más lenta

*false Un microprocesador es superescalar si tiene un número mayor de etapas y éstas son más cortas que las de un 
    cauce ("pipeline") normal, permitiendo una velocidad de reloj mayor.
*false Un microprocesador es superencauzado ("superpipelined") si permite la emisión de dos o más instrucciones en un mismo ciclo de reloj.

*La predicción de saltos está relacionada con...Los riesgos de control (intenta determinar de antemano el flujo de control)
*Si representamos la fase Decode con una D,  Execute con una E, Fetch con una F y Writeback con una W, 
    el orden correcto de las distintas fases de una instrucción máquina es: F D E W
*Una cola de precaptación sirve para: Reducir el efecto de los fallos de cache
*La precaptación (cola de instrucciones) está relacionada con...Los riesgos estructurales (intenta evitar el efecto de un fallo de cache)
*Respecto a la segmentación:Cuanto mayor sea la relación entre el tiempo de ejecución de una instrucción sin segmentar y el tiempo de una etapa 
en el procesador segmentado, mayor será la ganancia máxima que se puede obtener

*Respecto a los conceptos de procesamiento segmentado y superescalar, una de las siguientes afirmaciones es falsa
    ==> en cualquier procesador resulta ventajoso usar una cola de instrucciones, pero es más importante para uno 
            segmentado (fundamental) que para uno superescalar (conveniente)
    Por tanto son verdaderas:
        -por definición, un procesador superescalar debe tener varias unidades funcionales (más de una)
        -idealmente, con el segmentado se intenta ejecutar una instrucción por ciclo, y con el superescalar 
            más de una por ciclo (al combinarlo con segmentado)
        -implícitamente, se presupone que un procesador superescalar emitirá más de una instrucción por ciclo

*En la técnica de salto retardado: El compilador puede reorganizar el código para rellenar los huecos de retardo con instrucciones útiles
*Sobre la segmentación:Existen limitaciones al rendimiento provocadas por las instrucciones de salto y por las dependencias de datos.
*Respecto a la segmentación, ¿cuál de las siguientes afirmaciones es falsa?
    ==> Retrasar la fase de decisión saltar/no saltar de las instrucciones de salto condicional contribuye a mejorar el rendimiento del procesador
    Por tanto son verdaderas:
        -La técnica de register forwarding habilita una serie de caminos (buses) que se añaden al cauce para permitir que los resultados
             de una etapa pasen como entradas a la etapa donde son necesarias
        -Cuantas más etapas tenga un cauce, más instrucciones se estarán ejecutando en distintas fases y más posibilidades se presentan 
            de que existan riesgos entre ellas
        -La reorganización del código y la introducción de instrucciones nop permite evitar dependencias de datos

*¿Cuál de los siguientes modos de direccionamiento es *menos* preferible para un procesador con segmentación de cauce?
    Indirecto a través de memoria
*¿Cuál de los siguientes modos de direccionamiento es menos preferible para un procesador de 32 bits y con tamaño de instrucción de 32 bits?
    directo (o absoluto)

*¿Cuál de las siguientes afirmaciones sobre la segmentación de cauce es cierta?
    En general, un operación segmentada ("pipelined") requiere el mismo tiempo o más, desde el principio hasta el fin, que la 
    misma operación en una implementación no segmentada

*Respecto al salto retardado y al salto anulante, ¿cuál permite que se ejecute la siguiente instrucción, y cuál no?
    el retardado la ejecuta siempre, el anulante la ejecuta sólo si se cumple la condición de salto

*Respecto a la predicción de saltos, alguna de las siguientes afirmaciones es falsa
    ==> para predicción estática, es conveniente decidir que los saltos hacia adelante siempre se cumplen, y hacia atrás no
        es false porque==> en los bucles se fallaría siempre (salvo la última iteración)

    ==> por lo tanto son verdaderas
        -->si se toma la misma decisión para cada tipo de instrucción, se trata de "predicción estática"
        -->si la predicción cambia según la historia de ejecución del programa, se trata de "predicción dinámica"
        -->para predicción dinámica, existen, entre otros, algoritmos de dos o cuatro estados, que requieren 1 o 2 bits por instrucción


*La precaptación (cola de instrucciones) está relacionada con...Los riesgos estructurales (intenta evitar el efecto de un fallo de cache)
*true Se podría diseñar una CPU microprogramada de manera que la captación y la ejecución de microinstrucciones se solapasen en el tiempo.



//=========
//=========
Tema 5

*Al método de interacción con los periféricos, en los que el procesador vigila periódicamente el estado de los dispositivos mediante una encuesta activa
    se le denomina: ==> polling
*¿Cuántos niveles de interrupción podremos gestionar si disponemos de 7 controladores de interrupciones programables 8259? ==> 50
*¿En qué método para determinar la dirección de comienzo de una rutina de servicio de interrupción se envia parte de dicha dirección?
    ==> Direccionamiento relativo
*¿Cuál de los siguientes es un registro de un controlador de DMA?
    ==> WC (word count)
    ==> también encontramos:
        -->AR (direcciones)
        -->DR (datos)
        -->CR (Ordenes)
        -->De prioridades
    ==> NO están 
        --> IR 
        --> PC
        --> SP
*¿Cuál de los siguientes buses es más raro encontrar en un PC? ==> MCA
*false El ancho de banda máximo de los buses VESA Local Bus y PCI es mayor de 1 GB/s.
*Respecto a los conceptos de interfaz de dispositivo, controlador(a), puerto de E/S:
    ==>La controladora o interfaz contiene los puertos necesarios para utilizar el dispositivo
*¿Cuántas señales de control se necesitan como mínimo para implementar un sistema de gestión de interrupciones? 2
*true La transmisión isócrona garantiza un ancho de banda fijo sin que se produzcan interrupciones en el flujo de datos.
*true El "polling" es una técnica para conocer qué periférico (o interfaz) ha provocado una interrupción, 
    suponiendo que las interrupciones no son vectorizadas.
*true Mediante el software adecuado se puede hacer que las salidas a una impresora se escriban en un buffer en disco. 
    Tendríamos entonces un dispositivo de salida lógico.
*false La gestión distribuida del arbitraje consiste en un árbitro central del bus al que llegan múltiples líneas de petición de varios maestros potenciales y
    del que salen las correspondientes señales de concesión.
*¿Cuál de las siguientes afirmaciones acerca de las interrupciones en el PC (modo real) es cierta?
    ==>Todas las interrupciones se pueden generar por software
    Por tanto false :
    -->Todas las interrupciones se pueden generar por software
    -->Cada vector de interrupción es una palabra de 16 bits
    -->La tabla de interruciones tiene un tamaño de 256 bytes

*false La diferencia entre temporización de bus asíncrona y semisíncrona es que en la asíncrona las transferencias ocurren
    en algún múltiplo de ciclo de reloj, y en la semisíncrona no existe reloj del bus.
*true La prioridad de la línea de interrupción de un reloj de tiempo real ha de ser mayor que la prioridad de la    
    línea de interrupción de una unidad de disquete.

*En un sistema con dos buses separados, uno para el subsistema de memoria y otro para la E/S...el bus que une la memoria y 
    el procesador suele funcionar a la velocidad de la memoria
*Respecto a si un computador dispone de E/S independiente (separada) o usa E/S mapeada a memoria:
    ==>Si el repertorio del procesador tiene instrucciones del tipo IN y OUT, es que el computador dispone de E/S separada
*¿Con cuál de los siguientes dispositivos tendría sentido utilizar E/S programada sin consulta de estado?
    ==> Salida a un display de 7 segmentos
*La especificación de un bus a nivel eléctrico debe incluir las siguientes partes:Alimentación, impedancia, nivel de señal,...
*¿Cuántos bytes puede transmitir como máximo el controlador de acceso directo a memoria 8237 de forma consecutiva?
    ==> Existe al menos un modo de funcionamiento sin límite máximo
*La técnica de sondeo, escrutinio o "polling"...Permite establecer un mecanismo de asignación de prioridades a los distintos dispositivos
*false Una operación de E/S por DMA (transferencia de un bloque o conjunto de datos) es inicializada automáticamente por el controlador de DMA, es decir, 
    la CPU no tiene que ejecutar ninguna instrucción de inicialización.
*false En un sistema con interrupciones vectorizadas, el dispositivo o interfaz siempre suministra la dirección de la rutina de servicio de 
    interrupción, aunque a esa dirección le falten bits.
*false Cuando una CPU dispone de muchas líneas de interrupción con un dispositivo en cada una, será necesario utilizar "polling" 
    para detectar la fuente de la interrupción.
*Sobre las técnicas de transferencia en operaciones de E/S:
    ==> Pueden ser controladas por programa o por hardware
    ==> Si se emplea E/S programada puede hacerse con consulta de estado o sin consulta de estado
    ==> En el caso de utilizar E/S mediante DMA hace falta emplear un controlador de DMA
*Un procesador de 8 bits, ¿a cuántos puertos de E/S podrá acceder? ==> Depende del método de selección de periféricos que emplee
*false En la configuración de E/S mapeada en memoria, la CPU tiene instrucciones de E/S, y cuando se ejecuta una de ellas, la CPU habilita 
    alguna línea especial que sirve para que la circuitería externa decodifique por separado las direcciones correspondientes a memoria y 
    las correspondientes a puertos de E/S
*true En la configuración de E/S aislada o independiente, la CPU tiene instrucciones de E/S, y cuando se ejecuta una de ellas, la CPU habilita 
    alguna línea especial que sirve para que la circuitería externa decodifique por separado las direcciones correspondientes a memoria y 
    las correspondientes a puertos de E/S.
*true En el controlador de DMA 8237 los registros de dirección de memoria y contador de bytes están duplicados para cada canal para que en el modo de
    autoinicio el circuito sea capaz de recordar los valores originales de esos registros.

*La consulta de estado que se puede llevar a cabo en la E/S programada sirve para...consultar si el dispositivo está dispuesto para recibir datos o 
    tiene datos disponibles

*false La desventaja de las transferencias por bloques en un bus es que hay que transmitir todas las direcciones consecutivas de los datos del bloque.
*true El arbitraje estático de un bus es muy simple, pero es poco flexible, y además hay que calcular previamente qué ancho de banda va a requerir
     cada dispositivo para no bloquear al más rápido.

*true Cuando se utiliza "daisy-chain", será necesario leer los biestables de concesión de interrupción asociados a los dispositivos, a no ser que se
     usen vectores de interrupción.

*Un computador que utilice únicamente controladores programables 8237 para realizar el DMA por robo de ciclo puede realizar:
    ==>más de cuatro transferencias por DMA concurrentes

*true Escribiendo en el registro de máscara de interrupciones es posible inhabilitar todas las interrupciones enmascarables.
*¿Cuántos controladores de interrupciones 8259 hacen falta como mínimo para manejar 25 líneas de interrupción? ==> 4
*¿Es cierto que la consulta de estado permite averiguar el estado de un periférico y alterar la prioridad de los periféricos? ==> SI
*false El controlador de interrupciones programable 8259 no permite enmascarar selectivamente líneas de interrupción.
*true Durante un robo de ciclo DMA el procesador mantiene en alta impedancia el bus de direcciones.
*true La posibilidad de liberar un bus por "pre-emption" consiste en que se pueda interrumpir una transferencia en curso que esté realizando un 
    determinado maestro cuando llega una petición del bus por parte de un maestro potencial de mayor prioridad.
*false Un programa que realice salida programada con consulta de estado no ejecutará ninguna instrucción de entrada o carga.
*Respecto a si un computador dispone de E/S independiente (separada) o usa E/S mapeada a memoria:
    ==> Si el repertorio del procesador tiene instrucciones del tipo IN y OUT, es que el computador dispone de E/S separada
*false Suponga un programa residente que utiliza DMA por robo de ciclo para reproducir a través de una tarjeta de sonido una melodía de fondo,
    que se encontraba en memoria, de manera simultánea a la ejecución de un programa de usuario. La velocidad de ejecución de dicho programa
    de usuario no se verá afectada por el programa residente, ya que éste utiliza DMA.
*false En el modo mínimo el 8086 genera menos señales que en el máximo, y por tanto depende del controlador de bus 8288 para generar el
    conjunto completo de señales de control del bus.
*¿Cuál de las siguientes tareas no es responsabilidad de un circuito de interfaz o controlador de periféricos sencillo?
    ==> Ejecutar el programa de transferencia de información entre el procesador y los dispositivos de E/S
    Por tanto si:
        ==> Recibir señales de control desde el procesador
        ==> Adaptar el formato de las señales
        ==> Ajustar la temporización entre el procesador y los dispositivos de E/S
*¿A qué tipo de interrupciones corresponde la forma de determinar la dirección de comienzo de una rutina de interrupción en la que se envía 
    una instrucción de bifurcación completa?
    ==> Interrupciones vectorizadas
*false En el acceso directo a memoria la CPU pone en el bus de direcciones del sistema las direcciones de memoria correspondientes a 
    cada dato que se transfiere por DMA.
*Un computador con 15 líneas de direcciones tiene 3 módulos de memoria de 2^13 palabras y utiliza E/S mapeada en memoria. ¿Cuál es el número máximo
    de periféricos que pueden conectarse, si cada uno de ellos utiliza 8 direcciones? ==> 2^10
*false En la E/S controlada por interrupciones la CPU no tiene que ejecutar un programa para realizar la transferencia de datos.
*¿Cuál de las siguientes afirmaciones acerca del concepto de interrupción es cierta?
    ==> Es una bifurcación normalmente externa al programa en ejecución
*false El ancho de banda máximo de los buses VESA Local Bus y PCI es mayor de 1 GB/s.
*false SCSI son las siglas de Small Computer Serial Interface (interfaz serie para computadores pequeños).
        Small compuuter system interface
*true Si varios dispositivos comparten una única línea de solicitud de interrupción se puede usar "polling" para identificar el origen de una interrupción.

*La E/S programada:
    ==> Empeora las prestaciones globales del sistema respecto a la E/S por interrupciones porque la CPU debe encargarse de la 
    sincronización con la interfaz del periférico haciendo una espera activa.

*true En un sistema que utilice DMA transparente la CPU genera alguna señal de control externa que indica al controlador de 
    DMA cuándo realizar el acceso directo a memoria.
*false El "handshaking" se utiliza en transferencias de datos "síncronas" entre CPU y periféricos ==> se utiliza en asincronas
*¿Cuál de las siguientes afirmaciones acerca de un sistema con un bus único es falsa?
    ==> El procesador y los dispositivos pueden funcionar a diferentes velocidades si funciona de forma síncrona
    Por tanto son ciertas
        ==> Sólo un dispositivo puede escribir en el bus en un instante dado
        ==> El procesador y los dispositivos pueden funcionar a diferentes velocidades si funciona de forma asíncrona
        ==> Se utilizan las mismas líneas de control para conectar todos los dispositivos
*Sobre las técnicas de transferencia en operaciones de E/S:
    Todas son ciertas:
    ==> Pueden ser controladas por programa o por hardware
    ==> Si se emplea E/S programada puede hacerse con consulta de estado o sin consulta de estado
    ==> En el caso de utilizar E/S mediante DMA hace falta emplear un controlador de DMA
*true Cuando se usan interrupciones vectorizadas, el periférico puede suministrar al procesador un índice referente a una tabla de vectores de interrupción.
*true Puede existir un sistema que use "daisy-chain" e identifique la fuente de una interrupción mediante "polling".
*¿Cuál de los siguientes grupos de instrucciones podrá pertenecer a un procesador con E/S mapeada en memoria?
    ==> LOAD, MOV, STORE
    Por tanto no:
        ==> IN, LOAD, OUT
        ==> IN, LOAD, MOV
*false Con cuatro controladores de interrupciones 8259 se pueden manejar 32 niveles de prioridad.
*true Si varios dispositivos comparten una línea de solicitud de interrupción que usa "daisy chain", el dispositivo que 
    está eléctricamente más lejano de la CPU tiene la menor prioridad.

*Suponiendo que varios dispositivos comparten una única línea de solicitud de interrupción y que varios de ellos solicitan una
    interrupción al mismo tiempo, ¿qué dispositivo tendría mayor prioridad a la hora de ser atendidas sus peticiones?
    ==> Si se emplea una técnica de sondeo ("polling"), el dispositivo cuyo estado se consulte primero
    ==> Si se emplea una técnica de encadenamiento ("daisy-chain"), el dispositivo al que primero se conecta la línea INTA# del procesador

*¿Qué método de identificación de la fuente de una interrupción suele ser más económico desde el punto de vista hardware?
    ==> La identificación mediante la técnica de sondeo

*false El bus interno de un Pentium es del tipo "board-level".
*¿A qué tipo de interrupciones pertenecen las condiciones de tiempo real y los fallos hardware? => No enmascarables
*La conexión entre un dispositivo de E/S y el procesador mediante bus:
    ==> Permite conectar en paralelo varios dispositivos
*¿Qué técnica de E/S consume menos tiempo del procesador?
    ==>E/S mediante DMA
*true En la E/S mapeada en memoria se decodifican mediante hardware externo al procesador las direcciones correspondientes a E/S o a memoria.
*false El bus de direcciones contiene líneas para indicar el sentido de la transferencia de datos, por ejemplo una línea para distinguir entre 
    lectura y escritura.
    
*¿Es posible utilizar 4 GB de memoria en un sistema cuya CPU emplea E/S mapeada en memoria, cuyo bus de direcciones es de 32 bits y que tiene al
     menos un puerto de E/S? Supondremos que no se puede emplear ninguna técnica de extensión del bus de direcciones.
    ==> NO

*false En un sistema de gestión de interrupciones mediante "polling" o sondeo, el dispositivo que solicita la interrupción envía, junto
    con la señal de petición de interrupción, su correspondiente vector de interrupción.
*¿Qué técnica de E/S se dice controlada por hardware?
    ==> Acceso directo a memoria

*¿Qué forma de realizar acceso directo a memoria es más rápida?
    ==>Transferencia de bloques o parada de CPU

*Las interrupciones generadas por el teclado interrumpirán al procesador:
    ==>sólo si el procesador tiene activado el indicador de habilitación de interrupciones
*Cuando se produce una interrupción hardware...Se guarda el estado y se ejecuta la rutina de interrupción asociada
*En un sistema con dos buses separados, uno para el subsistema de memoria y otro para la E/S...
    ==>el bus que une la memoria y el procesador suele funcionar a la velocidad de la memoria

*true El bus AGP permite que los aceleradores gráficos accedan directamente a texturas almacenadas en la memoria principal.
*true Se puede programar un controlador de interrupciones 8259 de manera que atienda equitativamente a 8 dispositivos de igual 
    prioridad (cada vez que se atiende a un dispositivo, éste pasa automáticamente a tener la prioridad más baja).
*¿Cuál es la principal ventaja de un bus único avanzado frente a un bus único?
    ==>La desconexión de los periféricos del bus del procesador
*En la E/S controlada por interrupciones:
    ==> La CPU transfiere el control a una rutina de servicio cuando recibe una interrupción.
*¿Cuál de las siguientes afirmaciones es cierta?
    ==> Los buses PC XT, AT/ISA, MCA, EISA, VLB, PCI y AGP son buses de placa madre de PC
*true En las transferencias asíncronas, es común acompañar a cada dato transferido de una señal de control que indica la presencia del dato en el bus.
*Un procesador de 8 bits, ¿a cuántos puertos de E/S podrá acceder?
    ==>Depende del método de selección de periféricos que emplee

*Técnicas que se pueden usar para determinar la causa de una interrupción (señalar la opción incorrecta)
    ==> línea de reconocimiento INTA#
    Por tanto son correctas:
        ==> consulta de estado, o polling
        ==> múltiples líneas de interrupción INT1#, INT2#...
        ==> interrupciones vectorizadas
*true En las transferencias asíncronas no existe un reloj común a maestro y esclavo.
*true El controlador de DMA programable 8237 puede realizar una operación de acceso directo a memoria en la que se transfiera
    un bloque de 512 KBytes sin intervención de la CPU una vez comenzada la transferencia.
*false Con cuatro controladores de interrupciones 8259 se pueden manejar 32 niveles de prioridad.
*Supongamos dos CPU con bus de direcciones de ancho idéntico. Si una de ellas emplea E/S independiente y la otra mapeada en memoria, ¿cuál podrá acceder a una
    mayor cantidad de memoria? La CPU con E/S independiente.
*true La conexión de un 8086 a un sistema de memoria y E/S requiere algún circuito externo más en modo máximo que en modo mínimo.
*Utilizando E/S programada y como modo de direccionamiento selección lineal, ¿cuántos periféricos podrían conectarse a un 8086? 
    ==> 16 periféricos
*Respecto a la E/S programada...
    ==> false No todos los pasos requieren la ejecución de instrucciones por parte de la CPU
    ==> false La transferencia la realiza un procesador externo a la CPU

*Alguna/s de las ventajas de la E/S mapeada en memoria frente a la E/S aislada o independiente es/son:
    ==> El diseño de la CPU es más sencillo.
*Un controlador de DMA suele ser programado con la siguiente información relativa a una operación de E/S:
    ==> tipo de operación, tamaño de bloque a transferir, dirección inicial de memoria


//=========
//=========
Tema 6

*Con 8 circuitos de memoria RAM de 1K x 8 se puede crear un memoria de:
    ==> Todas las combinaciones anteriores son posibles

*false El refresco sólo RAS consiste en activar la señal RAS a la vez que se proporciona la dirección de fila a refrescar, y a 
    continuación activar la señal CAS sin proporcionar dirección de columna.
*true El registro base de la tabla de páginas contiene la dirección de memoria a partir de la cual se encuentra la tabla de 
    páginas de la memoria virtual.
*¿Cuál de los siguientes grupos de señales no se usa en un chip de memoria SRAM?
    ==> Selección de filas RAS# y de columnas CAS#. (( esta sería para DRAM ))
    Por tanto sí se usan:
        ==> Direcciones A_{n-1}-A_0.
        ==> Datos D_{n-1}-D_0.
        ==> Selección de chip CS# y habilitación de escritura WE#.

*false El registro máscara de una memoria asociativa permite inhabilitar las solicitudes de interrupción correspondientes a 
    fallos de comparación.

*Se tiene una memoria que emplea entrelazado. Si fallan varias celdas contiguas de uno de sus chips de memoria,
     ¿con qué tipo de entrelazado de memoria sería más fácil poder utilizarla?
    ==> Entrelazado de orden superior

*true En una jerarquía de memoria con estrategia "Write-Through" en todos los niveles, el tiempo medio 
    de acceso en escritura no es mejor que si sólo existiera el último nivel.
*true Un sistema de memoria virtual combina técnicas hardware y software.
*true La caché es gestionada por algoritmos hardware (o firmware).
*false La memoria FLASH es un tipo de SDRAM.
*¿Es posible utilizar 4 GB de memoria en un sistema cuya CPU emplea E/S mapeada en memoria, cuyo bus de direccioneses de 32 bits y
 que tiene al menos un puerto de E/S? Supondremos que no se puede emplear ninguna técnica de extensión del bus de direcciones.
    ==> NO
*El tamaño del registro indicador de una memoria asociativa de n palabras x m bits/palabra es: ==> n bits
*false Una caché puede incrementar las prestaciones de la memoria incluso si opera a la misma velocidad que la memoria principal.
*true En segmentación paginada el uso de una TLB puede ahorrar muchos accesos a memoria.
*true Las memorias caché con política de extracción anticipativa (prebúsqueda o preextracción) soportan búsqueda por demanda.
*false La eficiencia de un sistema que emplea memoria caché (definida como la razón entre el tiempo de acceso a caché y el 
    tiempo medio de acceso al sistema caché-M.P.) vale 0 cuando la razón de aciertos de la caché vale también 0.
*false Un SIMM con 8 chips de 4Mx1 contiene 1 M palabras de 32 bits.
*true En memoria virtual se utiliza postescritura en el disco como política de actualización.
*true Para aumentar el ancho de banda entre caché y memoria principal se puede acceder a ésta en modo página si lo permite.
*true En una memoria con entrelazado de orden inferior, M módulos y acceso simultáneo, el tiempo de acceso a las 2M palabras 
    cuyas direcciones son 0, 1, ..., 2M-1 es menor o igual que 3Ta, siendo Ta el tiempo de acceso a cada módulo de memoria.
*false El principal inconveniente de las memorias direccionables por contenido es su gran tiempo de acceso cuando se realizan
     búsquedas o comparaciones en paralelo.
*¿Cuál de las siguientes afirmaciones acerca de la memoria es *FALSA*?
    ==> Las celdas de memoria estática tienen que ser constantemente refrescadas
    Por tanto son trues:
        ==> Las celdas de memoria dinámica están constituidas por un transistor y un condensador
        ==> La memoria estática se emplea en las caches L1 y L2
        ==> La memoria dinámica usa señales de control RAS# y CAS#

*Sobre un sistema que utiliza un esquema de memoria virtual con segmentación paginada podemos decir que:
    false ==> Es un sistema de correspondencia entre direcciones virtuales y direcciones en memoria caché
    false ==> Entre disco y memoria principal se transfieren segmentos completos

*Respecto al refresco de memorias DRAM, ¿cuál de las siguientes afirmaciones es falsa?
    false ==> Una operación de refresco consiste en dar un impulso /CAS junto con una dirección de columna.
            sería es /RAS con dirección de fila
    true  ==> Los ciclos de refresco deben producirse cada pocos ms (milisegundos).
    true  ==> Los chips DRAM refrescan automáticamente la fila accedida en cualquier ciclo de lectura o escritura.
    true  ==> Se precisa una circuitería auxiliar, externa al chip DRAM o integrada en él, que produzca ciclos de refresco.

*En las políticas anticipativas de extracción de cache, ¿cuál de ellas se caracteriza por preextraer el bloque i+1 si se 
    referencia al bloque i y se produce falta de bloque?    ==> Preextracción por falta

*¿Cuáles de las siguientes direcciones de memoria podrían estar simultáneamente en una memoria cache de 256 palabras con 
    16 palabras por bloque y con correspondencia directa ?
    ==> 0xABAB y 0xABAC
*¿En qué tipo de ciclo de refresco se hace RAS# = 0?
    ==> RAS#, CAS# antes de RAS#, Refresco transparente

*true Suponga que una memoria de acceso aleatorio (RAM) tiene 2^k palabras de 2^p bits cada una. En tal caso sería común
    que el registro de dirección de memoria tuviera k bits y el registro intermedio de memoria tuviera 2^p bits.

*En una cache con correspondencia directa de 2^p palabras y líneas de 2^w palabras, el gestor de memoria *NO* 
    considera como campo (conjunto de bits contiguos con significado o relevancia) los siguientes bits:
    ==> bits w…w+p-1
    Por tanto si:
        ==>últimos w bits (0..w-1) (los menos significativos) ((campo palabra))
        ==>bits w…p-1 ((campo marco))
        ==>primeros bits, desde el más significativo hasta el bit p ((campo "etiqueta"))

*false El ancho de banda de las arquitecturas de memoria dinámica más recientes (DRDRAM y SLDRAM) es de unos pocos TB (Terabytes).

*El ancho de banda de memoria es: ==> el número de bytes que se pueden leer/escribir por unidad de tiempo
*El tamaño del registro de salida de una memoria asociativa de n palabras y m bits/palabra es:
    ==> m bits
*Si tenemos una memoria asociativa de n palabras con m bits/palabra, ¿cuál es el tamaño del registro indicador?
    ==> n bits

*Las señales BHE# y A0(=BLE#) son necesarias para seleccionar direcciones pares e impares en el procesador
    ==>8086
*false El objetivo de un circuito de refresco de memoria es conseguir que ésta no se caliente más allá de cierto
     límite peligroso para la integridad de los datos.

*¿En qué tipo de memorias coincide el tiempo de acceso y el tiempo de ciclo? ==> SRAM
*En una jerarquía de memoria, a medida que nos alejamos de la CPU:
    ==> el tamaño de la unidad de transferencia entre dos niveles aumenta
*¿Qué política de memoria virtual para colocar nuevos segmentos en los huecos libres de la memoria principal evita
    el que se generen huecos pequeños?
    ==> Peor ajuste
*Las celdas de memoria estática...
    ==> mantienen las información almacenada por tiempo indefinido mientras se mantenga la alimentación
*Un procesador accede en el instante de tiempo t a una posición de memoria d(t). Poco tiempo después (en el 
    instante de tiempo t+k) accede a la posición anterior d(t)-1. Esos dos accesos son un ejemplo de...
    ==> Localidad espacial
*false Una TLB es una tabla de localización de bloques de memoria inutilizados ("Table Location Block").
*false Una placa madre de un 486 con un único SIMM de 30 contactos con 8 chips de 1M x 1, tiene 2 M palabras de memoria principal.
*¿Qué política de colocación en caché necesita más comparadores, la correspondencia asociativa por conjuntos o 
    la correspondencia por sectores?
    ==> Depende de si es mayor el número de bloques por conjunto o el número de sectores
*true La penalización por una falta de página suele ser de cientos de miles de ciclos de reloj de la CPU.
*Un TLB suele tener:
    ==> un número de entradas o elementos mucho menor que el número de páginas de la memoria virtual
*true Si el tamaño de página es pequeño y el número de páginas virtuales grande, la tabla de páginas puede ser 
    demasiado grande para residir completa en memoria. Una solución es dividir la tabla de páginas en dos niveles: 
    directorios de tablas de páginas, y tablas de páginas.
*true Los modernos circuitos DRAM permiten prescindir de contadores externos para el refresco.
*Sólo una de las siguientes afirmaciones sobre memorias ROM es correcta. ¿Cuál?
    ==> Para fabricar una ROM se deben conocer los datos que se desea que almacene
    Por tanto son incorrectas:
        ==> Una PROM (Programmable ROM) se puede grabar usando un dispositivo programador que selectivamente funde 
            contactos aplicándoles altas temperaturas mediante diminutas cabezas soldadoras (“equipo de puntas”)
        ==> Una EEPROM (Erasable EPROM) se puede grabar (eléctricamente), y borrar (usando rayos ultravioleta)
        ==> Una EPROM (Electrically Progr. ROM) se puede grabar eléctricamente, sin fundir contactos, pero no se puede borrar

*true En una memoria asociativa sin registro de máscara, el valor de una clave almacenada en el registro de entrada se compara 
    simultáneamente con todas las palabras de memoria.

*¿Cuál de las siguientes afirmaciones respecto a la memoria RDRAM no es cierta?
    ==> El bus de datos suele ser muy ancho.
    por tanto es cierto :
        ==> Funciona de forma síncrona y a muy alta velocidad
        ==> Las direcciones de fila y columna son enviadas en el mismo ciclo de reloj por buses separados
        ==> La interfaz entre el procesador y la memoria es muy diferente a la de las memorias DDR

*¿Cuál de las siguientes afirmaciones acerca de las memorias RAM estáticas es falsa?
    ==> El número de transistores necesario para implementar cada celda es menor que en las memorias RAM dinámicas
    Por tanto son ciertas :
        ==> Los datos almacenados se mantienen por un tiempo indefinido
        ==> Las operaciones de lectura no son destructivas
        ==> Son más veloces que las memorias RAM dinámicas

*true El registro base de la tabla de páginas contiene la dirección de memoria a partir de la cual se encuentra
    la tabla de páginas de la memoria virtual.

*¿Qué necesitamos para construir una memoria de 1K x 8 bits?
    ==> 8 memorias de 256 x 4 bits y un decodificador de 2 a 4

*true La SDRAM utiliza entrelazado.
*Supongamos una memoria asociativa con un registro indicador de x bits y otro de máscara de y bits. 
    ¿Cuántas palabras puede almacenar dicha memoria? ==> X
*false Una caché totalmente asociativa es equivalente a una asociativa por conjuntos de una vía.
*false El entrelazado de orden superior se utiliza más que el de orden inferior en procesadores vectoriales
     debido a que su expansión es más fácil.
*false El TLB tiene tantas entradas como número de páginas la memoria física.
*false El ancho de banda de memoria es el número de bits que se pueden transferir entre ésta y la CPU 
    en paralelo en una sola operación de lectura o escritura.
*Una memoria estática tiene un bus de datos de 32 bits y su bus de direcciones es de 20 bits, ¿cuál es su capacidad?
    4 Mbytes
*¿Qué conjunto de componentes permite construir una memoria 256Mx32? (sin que sobren componentes)
    32 chips 64Mx4
*true El principio de localidad espacial en los accesos a memoria se justifica porque las instrucciones 
    se ejecutan secuencialmente y los datos relacionados se almacenan juntos.
*false La RAM EDO es más rápida que la SDRAM.
*En el Pentium, el TLB permite buscar rápidamente...
    ==> La dirección física a partir de la dirección lineal
*En una cache asociativa por conjuntos de 2^v vías con 2^b líneas (marcos de bloque) de 2^w palabras, el gestor 
    de memoria no considera como campo (conjunto de bits contiguos con significado o relevancia) los siguientes bits:
    ==> bits  b…b+c-1 (siendo 2^c=nº conjuntos)
    Por tanto considera:
        ==>bits w…w+c-1 (con c=b-v)
        campo "conjunto"
        ==>bits w…w+c-1 (siendo 2^c=nº conjuntos)
        campo "conjunto"
        ==>últimos w bits (0…w-1) (los menos significaftivos)
        campo "palabra"
*¿Cuál de las siguientes afirmaciones es falsa?
    ==>Las memorias DRAM son en general mucho más rápidas que las SRAM
    Por tanto son verdaderas:
        ==>La lectura de un bit de la matriz de almacenamiento de una memoria DRAM proporciona una señal 
        mucho más débil que la suministrada por los inversores de una celda de memoria SRAM.
        ==>Las memorias DRAM presentan generalmente una capacidad de almacenamiento mucho mayor que las SRAM.
        ==>Una celda DRAM sólo necesita un transistor y un condensador.
*En una jerarquía de memoria, a medida que nos alejamos del procesador...
    ==>El tamaño de la unidad de transferencia entre dos niveles aumenta.
*Respecto al entrelazado de memoria:
    ==>Empleando entrelazado de orden superior las direcciones de memoria se reparten de forma consecutiva dentro de un módulo
    ==>El entrelazado de orden inferior permite el acceso simultáneo a palabras consecutivas
    ==>La cantidad de conflictos en el acceso a la memoria suele ser menor en los sistemas que emplean entrelazado de orden inferior
*false En los sistemas de memoria entrelazada, la memoria está dividida en n módulos. Se utilizan log2 n bits del bus de direcciones
 (que tiene m bits en total) para seleccionar un módulo. El resto de los bits del bus de direcciones se divide en n subbuses de tamaño
  (m - log2 n)/n, cada uno de los cuales sirve para direccionar la palabra dentro del módulo correspondiente.
*true El número de páginas direccionables con la dirección virtual puede ser superior al número de páginas direccionables con la
    dirección física.
*true Uno de los objetivos de las cachés separadas (no unificadas) es poder aumentar el ancho de banda entre caché y CPU al emitir 
    direcciones de instrucción y dato a la vez.
*¿En qué tipo de refresco de memoria DRAM CAS# permanece a 0 después del ciclo de lectura o escritura precedente?
    ==>Refresco transparente
*La "postescritura (write-back) marcada"
    ==>es más eficiente que la "postescritura siempre"
*false En una caché totalmente asociativa de 4 K bloques no pueden coexistir simultáneamente los bloques 18 y 8120 de memoria principal.
*¿Cuál de las siguientes secuencias de tipos de memoria está ordenada de menores a mayores prestaciones?
    ==> FPM, EDO, RDRAM
*Un TLB suele tener:
    ==> un número de entradas o elementos mucho menor que el número de páginas de la memoria virtual
