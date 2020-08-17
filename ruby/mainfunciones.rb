#Modulo Funciones Principales

load 'funciones.rb'

ciclo = "S"
while (ciclo == "S" or ciclo == "s")

    print "--- Operaciones Básicas con Ruby ---","\n"
    print("Introduce el primer numero: ")
    n1 = Integer(gets.chomp)
    print("Introduce el segundo número: ")
    n2 = Integer(gets.chomp)

    print mensaje()+"\n"
    print "La suma es: ", suma(n1,n2),"\n"
    print "La resta es: ", resta(n1,n2),"\n"
    print "La multiplicacion es: ", multiplica(n1,n2),"\n"
    print "La division es: ", divide(n1,n2),"\n"

    compara(n1,n2)
    cuenta(n1,n2)
    puts "El area de la circunferencia es: #{getArea(n1)}"

    puts "Desea otra operación (S/N)?"
    ciclo = gets.chomp

end

puts "*** Fin del programa ***"