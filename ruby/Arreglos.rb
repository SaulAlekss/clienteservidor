# Clase para el manejo de arreglos en ruby

class Arreglo

    # Método contructor
    def initialize ()
        # Crear un arreglo vacio
        @vector = []
    end

    # Insertar elemento en el arreglo
    def insert(elem)
        @vector.push(elem)
    
    end

    #Buscar un elemento dentro del arreglo
    def buscar(elem)
        @vector.each_with_index do |elemento, index|
            if elemento == elem
                puts "El elemento buscado es:[#{index}]=#{elemento}"    
                return index
            #Verificamos que el elemento esta al final del arreglo
            elsif (elemento != elem ) && (index+1 == @vector.length)
                puts "El elemento no existe [#{index}]=#{elem}"
                return -1
            end
        end

end

    # Cambiar elemento
    def cambiar(elem,elem_new)
        # Buscamos elemento y obtenemos suposición en el arreglo
        puntero = buscar (elem)
        if (puntero >= 0)
            # Lo modificamos
            @vector[puntero]=elem_new
            print "Elemento modificado.."
        else
            puts "No se modifico nada..."
        end
    end
    # Borrar elementos
    def borrar(elem)
        # Buscamos elemento y obtenemos suposición en el arreglo
        puntero = buscar (elem)
        if (puntero >= 0)
            @vector.delete_at(puntero)
            print "Elemento borrado #{elem}..."
        else
            puts "El elemento no existe, nada se borró..."
        end
    end

    # Imprime todos los elementos del arreglo
    def printAll(){} 
        if @vector.length > 0
        @vector.each_with_index do |elemento, index|
            puts "Elemento[#{index}]=#{elemento}"
            end
        else
            puts "El arreglo está vacio"
        end
    end
end


# Creamos objetos de la clase
