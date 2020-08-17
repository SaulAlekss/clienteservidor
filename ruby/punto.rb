class Punto

    # Constructor
    def initialize(valorX, valorY)
        # Creamos atributos de la calse
        @x = valorX
        @y = valorY
    end

    # Métodos get para regresar los valores de los atributos del objeto
    def getX()
        return @x 
    end

    def getY()
        return @y 
    end

    # Métodos set para modificar el valor de los atributos del objeto
    def setX(valorX)
        @x = valorX
    end

    def setY(valorY)
        @y = valorY
    end

end
