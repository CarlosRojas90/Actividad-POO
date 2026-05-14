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
¿Dónde se evidencia el polimorfismo en el programa?
¿Por qué sería menos adecuado resolver este ejercicio con muchos if o switch para identificar el tipo de empleado?

# Explique una dificultad que apareció durante la actividad
Qué problema apareció?

Qué parte del código estaba relacionada con el problema.

Cómo lo corrigió o qué entendió después de revisarlo.

Dificultad, a veces confundia nombres de las clases y atributos

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
Luego de entender cómo funcionaba el polimorfismo y la herencia gracias a la explicación de la IA, pude centrarme mejor en cómo estructurar y desarrollar mi código de manera correcta. Hice uso de la actividad anterior de figuras geométricas para apoyarme, la cual ya había trabajado con una estructura similar de clase base y clases hijas , lo que me sirvió como referencia para desarrollar mi proyectoese. Además, conté con la ayuda de mi compañero Joseph Andrés, quien me resolvió varias dudas
