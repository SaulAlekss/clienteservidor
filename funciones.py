"""
Nombre: funciones.py
Objetivo: Muestra la operacion de las funciones en python
Autor: Saul
Fecha: 27 de julio 2020
"""

def mensaje():
	print("Hola desde Mensaje")

def regresaMensaje():
	return "saludo desde regresaMensaje"

def printMensaje(msg):
	print(msg)

def suma(n1,n2):
	return n1+n2

def resta(n1,n2):
        return n1-n2

def multiplicacion(n1,n2):
        return n1*n2

def division(n1,n2):
	if (n2 != 0):
	        return n1/n2
	else:
		print("Error no se puede dividir entre cero...")

def compara(n1,n2):
	if n1>n2:
		print("El mayor es n1: ",n1," ",n2)
	elif n2>n1:
		print("El mayor es n2: {},{}".format(n2,n1))
	else:
		print("Los numeros son iguales: {}, {}".format(n1,n2))

#Funcion para mostrar operacion de for
def cuenta(n1,n2):
	if (n2>n1):
		for i in  range(n1, n2+1):
			print("Valor de i:{}".format(i))
	elif(n1>n2):
		for i in range(n1, n2-1,-1):
			print("Valor de i:{}".format(i))
	else:
		print("Los numeros son iguales no puedo contar : {}, {}".format(n1, n2))


#Inicia funcion principal main
def main():

	ciclo = 'S'
	while ciclo == 'S' or ciclo == 's':
	
		#Invocamos funcion mensaje()
		mensaje()
		#Invocamos funcion regresaMensaje()
		print(regresaMensaje())
		#Invocamos funcion printMensaje()
		printMensaje("Hola te saludo ...")


		#Leemos los datos por teclado
		a = int(input("Ingresa el primer numero entero: "))
		b = int (input("Ingresa el segundo entero: "))
		#Invocamos la funcion suma
		print("La suma es: ", suma(a,b))
		print("La resta es: ", resta(a,b))
		print("La multiplicacion es: ", multiplicacion(a,b))
		print("La divicion es: ", division(a,b))

		compara(a,b)
		cuenta(a, b)

		#Preguntamos al usuario por otra operacion
		ciclo = input("¿Desea otra operación (s/n)?")
	else:
		print("Fin del programa")

if __name__== "__main__":
	main()
