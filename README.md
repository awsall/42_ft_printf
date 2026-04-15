*Este proyecto ha sido creado como parte del currículo de 42 por awsall*

**TABLA DE CONTENIDO**

**Descripción**
**Descripción de las funciones de printf**
**Instrucciones**
**Recursos**
**Uso de IA**

# Descripción

El proyecto de ft_printf consiste en recrear la función printf de la librería c y no es necessario implementar la gestión del buffer del printf original. Vamos a implementar las conversiones siguientes:
%c por un caractère
%s por un string
%i por un entero base 10
%d por un decimal base 10
%u por un entero no asignado base 10
%p por un puntero,
%x por un hexadecimal en minuscula base 16
%X por un hexadecimal en majuscula base 16
%% por un %
Nuestro programa debe devolver un int o sea el número de caracteres.

**Descripción de las funciones de printf**

**ft_print_char**
Esta función sirve para escribir un sólo caràctère. En esta función hemos manejado el error de write:
```
if (write (1. &c, 1 == -1)
return (-1);
```
Antes de devolver el número de caractèr.

**ft_print_str**
Ella sirve para escribir una  cadena de carácrteres.
En esta función hemos manejado el error de write también, y el caso en el que la cadena sea "null".

**ft_print_ptr**
Escribe la dirección de un puntero de typo void * usado como argumento, en la forma hexadecimal(minuscule), con "0x" delante.

**ft_print_hexa_base**
Escribe un numero hexadecimal base 16 en minuscula y en majuscula o sea base = "0123456789abcdef" y "0123456789ABCDEF".

**ft_print_percent**
Sirve para escribir un  % en el descriptor. 

**ft_print_int**
Sirve para ecribir un entero y un decimal base 10.

**ft_printnbr_unsigned**
Ella escribe un numéro sin signo base 10.
 
**ft_printf**
Es la función principal de nuestro proyecto. Es una función variàdica es decir que acepta varios parámetros. Despues de crear nuestras funciones para las conversiones hemos creado un dispach o handle **ft_formats** que nos ayuda a manejar cada conversión o paràmetro.

## Instruccionnes



### Recursos

 
