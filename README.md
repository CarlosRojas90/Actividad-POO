# Actividad-POO

# Evidencia de ejecución
Menu:
<img width="1476" height="171" alt="image" src="https://github.com/user-attachments/assets/3ff6c4d6-42d0-49f1-ab61-e0096bc3603a" />
Empleados:
<img width="1067" height="1014" alt="image" src="https://github.com/user-attachments/assets/f5b788ee-a900-4f30-9b19-658e0fee0756" />
Nomina total:
<img width="680" height="155" alt="image" src="https://github.com/user-attachments/assets/2b4a3cc2-c820-4e43-97d7-02d82bc72253" />


# Explicación del diseño
¿Cuál es la clase base y por qué?

En este proyecto la clase base es Empleado, la tomo como clase padre, ya que DesarrolladorJunior, DesarrolladorSenior, LiderTecnico y Tester son sus clases hijas. Empleado define atributos comunes como nombre y salarioInicial, aparte de métodos que funcionan igual para todos, como getNombre() y getSalarioInicial(). También declara métodos virtuales puros como calcularSalario() y getTipo(), que las clases hijas están obligadas a implementar a su manera, ya que al llevar = 0, por ejemplo calcularSalario() const = 0;, en su declaración no tienen una implementación por defecto. La herencia se establece en cada clase hija usando : public Empleado.

¿Qué método se sobrescribe en las clases derivadas?

En la clase padre se declaran "virtual double calcularSalario() const = 0" y "virtual string getTipo() const = 0"  como métodos virtuales puros, los cuales las clases hijas están obligadas a sobrescribir por medio de override. Cabe aclarar que cada clase los implementa a su manera, por ejemplo calcularSalario() varía según el tipo de empleado, por ejemplo, DesarrolladorJunior no tiene bono, DesarrolladorSenior aplica un 20%, LiderTecnico un 25% y Tester un 5%.

¿Dónde se evidencia el polimorfismo en el programa?

El polimorfismo se hace evidente en la clase Nomina, más exactamente en los ciclos for donde se recorre el vector empleados. Este vector almacena punteros de tipo Empleado*, pero en inicializarDatos() lo que realmente se guarda son punteros a objetos de las clases hijas como DesarrolladorJunior o LiderTecnico. Cuando el ciclo llama a e->calcularSalario(), gracias a que el método es virtual, se detecta qué tipo de objeto es realmente y ejecuta la versión correcta, todo desde el mismo ciclo sin que Nomina tenga que saber qué tipo específico es cada empleado.

¿Por qué sería menos adecuado resolver este ejercicio con muchos if o switch para identificar el tipo de empleado?

Es menos adecuado resolverlo con if o switch, ya que Nomina tendría que preguntarle a cada empleado qué tipo es para saber qué fórmula aplicar, cuando esa responsabilidad le pertenece a cada clase. El otro problema está en la escalabilidad, ya que al momento de agregar un nuevo tipo de empleado habría que buscar y modificar todos los if dispersos en el código. En cambio, con el diseño actual solo tocaría crear una nueva clase hija que herede de Empleado y sobrescriba los métodos, sin necesidad de tocar Nomina para nada.

# Explique una dificultad que apareció durante la actividad
Qué problema apareció?

Cuando ejecutaba el programa me daban varios errores como problemas con un destructor, a veces escribia mal los nombres de los atributos y los metodos, a veces se me olvidaba poner los include en los archivos y por ulitmo la correcta implementacion de los metodos virtuales puros.

Qué parte del código estaba relacionada con el problema.

El problema del destructor estaba en Empleado.h. La mala escritura de los atributos, metodos e includes me paso en muchas partes de los archivos. El problema de los metodos virtuales puros estaba en Empleado.h

Cómo lo corrigió o qué entendió después de revisarlo.

En el destructor de Empleado no habia puesto " = default;". Con la mala escritura metocaba ser muy cuidadoso y estar mendiente a las pistas que me daba la consola para poder corregir. Por ultimo para los metodos virtuales puros me falto poner " = 0;", ya que ese me sirve para volver Empleados en clase abstracta y obligar a las clases hijas a implementar ese metodo.

# Declaración de uso de IA

Opción B: usé IA como apoyo
- aclarar un concepto
- explicar un error
- revisar una idea

Fragmento o idea sugerida por la IA:

Al inicio del proyecto no tenía claro cómo diseñar correctamente una clase base que permitiera usar herencia y polimorfismo de manera adecuada. Le pregunté a la IA por qué era necesario usar Empleado como clase padre en lugar de crear cada tipo de empleado de forma independiente.

Qué revisé antes de usarlo:

Anteriormente lo que hubiera hecho es crear cada clase de forma independiente, repitiendo en cada una los atributos y métodos que comparten, como nombre, salarioInicial, getNombre() y getSalarioInicial(). Luego al identificar que los cuatro tipos de empleado comparten esos mismos elementos, tiene mucho más sentido definirlos una sola vez en la clase base Empleado y heredarlos en las clases hijas.

Qué cambié o adapté:

Luego de entender cómo funcionaba el polimorfismo y la herencia gracias a la explicación de la IA, pude centrarme mejor en cómo estructurar y desarrollar mi código de manera correcta. Hice uso de la actividad anterior de figuras geométricas para apoyarme, la cual ya había trabajado con una estructura similar de clase base y clases hijas , lo que me sirvió como referencia para desarrollar mi proyecto. Además, conté con la ayuda de mi compañero Joseph Andrés, quien me resolvió varias dudas.
