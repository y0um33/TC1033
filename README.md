# Pensamiento Computacional Orientado a Objetos (TC1033.302)
| Name | Matrícula |
| :---: | :---:|
| Yumee Chung | A01712059 |

# Contexto
Los consumidores de un super mercado quieren saber donde está disponible los productos que ellos quieren, checar la disponibilidad. Este proyecto consiste en: desplegar una pregunta para identificar si el usuario es un staff o consumidor. Despues, dependiendo del tipo de usuario, el consumidor va a tener una pantalla sólo con las cantidades de los productos. Va a estar tres diferentes secciones para este super mercado: vegetales, frutas y juegos. Hay 4 frutas y 4 vegetales y 3 juegos. Además de cantidades, también se va informar el origen y el precio. Para el juego se va demostrar la descripción del juego también.

# Funcionalidad
El codigo consiste en 7 objetos:
- Frutas
- Vegetales
- Producto
- Juego
- Season
- Descuento
- Main
  
Cada objeto tiene su propio valor y variable. Dependiendo del objeto el staff va poder corregir sus cantidades. Utilizando getters (.get) se imprime los datos y con setter (.set) guarda los datos y datos modificados.

Consumidor puede:
- Ver los precios, cantidad, orígen. (en caso de juego también podrá ver los descripciones.
- Ver los descuentos disponibles

Staff puede:
- Ver los precios, cantidad, origen. (en caso de juego también podrá ver los descripciones)
- Modificar las cantidades de los productos

# Consideraciones
- El PIN para staff es: 8596
- El código está hecho con C++ estándar entonces se compila sin importar mac o window.
- Para regresar al menu, o al inicio necesita que reiniciar el código

# Correciones
- Modifique la diagrama de UML agregación a composición
- Agregar comentarios que explica la función de cada código

# Subcompetencias
| Subcompetencia | Explicación |
| :---: | :---:|
| SICT0302A | Diseñe correctamente clases sencillas y fueron completos |
| SICT0303A | Uso de métodos y atributos de clase correctamente (constructores, getters, setters). Implementé correctamente la herecnia, composición, diagrama de clases. |
| SICT0401A | Mi código sigue los estándares: estilo, sangrías, comentarios, nombres. |
| SEG0702A | Guardé correctamente los avances y utilice Github correctamente para subir los archivos. |
  
