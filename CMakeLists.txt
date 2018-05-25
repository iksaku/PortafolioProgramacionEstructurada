cmake_minimum_required(VERSION 3.9)
project(ProgramacionEstructurada C)
set(CMAKE_C_STANDARD 99)

# Actividades Fundametales
add_executable(1_lee_numero ActividadesFundamentales/1_lee_numero.c)
add_executable(19_ordenamiento ActividadesFundamentales/19_ordenamiento.c)
add_executable(21_desviacion ActividadesFundamentales/21_desviacion.c)
add_executable(suma_matriz ActividadesFundamentales/suma_matriz.c)

# Medio Curso
add_executable(volumen_esfera MedioCurso/volumen_esfera/volumen_esfera.c)
add_executable(triangulo MedioCurso/triangulo/triangulo.c)
add_executable(par_impar MedioCurso/par_impar/par_impar.c)
add_executable(promedios_de_examen MedioCurso/promedios_de_examen/promedio_de_examen.c)
add_executable(tipo_de_triangulo MedioCurso/tipo_de_triangulo.c)
add_executable(ejercicio22 MedioCurso/ejercicio22.c)
add_executable(estatuto_for MedioCurso/estatuto_for/estatuto_for.c)
add_executable(suma_cien MedioCurso/suma_cien/suma_cien.c)
add_executable(suma MedioCurso/suma/suma.c)
add_executable(contador_pares_impares MedioCurso/contador_pares_impares/contador_pares_impares.c)
add_executable(ejercicio33 MedioCurso/ejercicio33/ejercicio33.c)
add_executable(ejercicio35 MedioCurso/ejercicio35/ejercicio35.c)
add_executable(ejercicio37 MedioCurso/ejercicio37.c)
add_executable(ejercicio39 MedioCurso/ejercicio39.c)
add_executable(ejercicio43 MedioCurso/ejercicio43/ejercicio43.c)
add_executable(m_ejercicio44 MedioCurso/ejercicio44.c)
add_executable(ejercicio45 MedioCurso/ejercicio45/ejercicio45.c)

# Ordinario
add_executable(o_ejercicio44 Ordinario/ejercicio44.c)