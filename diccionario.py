"""
Nombre: diccionario.py
Objetivo: Muestra la opercacion de los diccionarios en python
Autor: Saul
Fecha: 5 de agosto del 2020
"""

# Un diccionario es una estructura de datos que almacena valores heterogeneos
# pero los almacena en un formato de clave:valor. Quiere decir que cada
# elemento en el diccionario se almacen en una lista de pares key:valor.
# Por ejemplo: 'nombre':'Saul Alekssander Rojas Quiroz'
# No son mutables, no cambian una vez que los creamos permaneceran los mismos
# valores, no podremos introducir mas datos

def main():
    #creamos un diccionario vacio con distintos key y datos
    dic = {'clave':20082133, 'nombre':'Erick Jose Verduzco Campos', 'edad':54,'cursos':['Python','Progra Web', 'Inteligencia Artificial']}
    # Listar items del diccionario
    print("Los items son: ", dic)
    #Imprimir un item de un diccionario proporcionando su key
    print("El valor de la key es: ", dic['nombre'],"\n")
    # Imprimir todos los valores de todos los key del siccionario
    for i in dic:
        print(i, ": ", dic[i])

    # En el caso de la lista incluida como un item del diccionario, lo acesamos
    print("\n")
    for i in dic['cursos']:
        print("curso: ",i)

    # Investigar los metodos de los diccionarios y correrlos en el programa
    # get, pop, key, clean, items, update


if __name__=="__main__":
        main()