# Cargar archivo de las clase Punto
load "Arreglos.rb"

# Creamos un objeto de la clase Arreglos.rb
vec = Arreglo.new()


# Insertar un elemento
vec.insert("first")
vec.insert(12)
vec.insert(false)
vec.insert("C")
vec.insert(12.45)
vec.printAll()

# Buscar elemento
vec.cambiar("a", true)
puts "\n"
vec.printAll()