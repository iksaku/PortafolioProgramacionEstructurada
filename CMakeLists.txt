cmake_minimum_required(VERSION 3.9)
project(ProgramacionEstructurada C)
set(CMAKE_C_STANDARD 99)

# Actividades Fundametales
add_executable(1_lee_numero ActividadesFundamentales/1_lee_numero.c)

# Medio Curso
add_executable(volumen_esfera MedioCurso/volumen_esfera/volumen_esfera.c)
add_executable(triangulo MedioCurso/triangulo/triangulo.c)
add_executable(par_impar MedioCurso/par_impar/par_impar.c)
add_executable(promedios_de_examen MedioCurso/promedios_de_examen/promedio_de_examen.c)
add_executable(tipo_de_triangulo MedioCurso/tipo_de_triangulo/tipo_de_triangulo.c)
add_executable(ejercicio22 MedioCurso/ejercicio22/ejercicio22.c)
add_executable(estatuto_for MedioCurso/estatuto_for/estatuto_for.c)
add_executable(suma_cien MedioCurso/suma_cien/suma_cien.c)
add_executable(suma MedioCurso/suma/suma.c)
add_executable(contador_pares_impares MedioCurso/contador_pares_impares/contador_pares_impares.c)

# Ordinario