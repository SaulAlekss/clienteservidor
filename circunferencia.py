
"""
Nombre: circunferencia.py
Objetivo: Calcula la circunferencia con el radio al cuadrado
Autor: Saul
Fecha: 28 de julio 2020

"""

#Importamos el math
import math as m

def calcularArea(valorRadio):
	return m.pi*m.pow(valorRadio,2)


def main():
	ciclo = 's'
	while ciclo  == 's' or ciclo == 'S':
		print("---Programa para Calcular area de la circunferencia---")
		vradio = int(input("Introduce el valor del radio: "))
		print("El area de la circunfernecia es a: {} es:{}".format(vradio,calcularArea(vradio)))
		ciclo =  input("Otro Calculo (s/n)")
	else:
		print("Findel programa......")


if __name__ == "__main__":
	main()
