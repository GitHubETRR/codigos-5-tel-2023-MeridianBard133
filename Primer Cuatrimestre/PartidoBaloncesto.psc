Algoritmo PartidoBaloncesto
	Definir equipo1,equipo2 Como Caracter
	Definir puntos1,puntos2,diferencia Como Entero
	Escribir 'Ingrese el nombre del equipo 1: '
	Leer equipo1
	Escribir 'Ingrese el nombre del equipo 2: '
	Leer equipo2
	Escribir 'Ingrese los puntos anotados por ',equipo1,': '
	Leer puntos1
	Escribir 'Ingrese los puntos anotados por ',equipo2,': '
	Leer puntos2
	Si puntos1>puntos2 Entonces
		Escribir 'El equipo ganador es ',equipo1
	SiNo
		Si puntos2>puntos1 Entonces
			Escribir 'El equipo ganador es ',equipo2
		FinSi
	FinSi
	Escribir 'Equipo 1:'
	Escribir 'Ingrese la cantidad de tiros simples:'
	Leer tiros_simples_Equipo1
	Escribir 'Ingrese la cantidad de tiros dobles:'
	Leer tiros_dobles_Equipo1
	Escribir 'Ingrese la cantidad de tiros triples:'
	Leer tiros_triples_Equipo1
	total_tiros_Equipo1 <- tiros_simples_Equipo1+tiros_dobles_Equipo1*2+tiros_triples_Equipo1*3
	porcentaje_tiros_simples_Equipo1 <- (tiros_simples_Equipo1*100)/total_tiros_Equipo1
	porcentaje_tiros_dobles_Equipo1 <- (tiros_dobles_Equipo1*2*100)/total_tiros_Equipo1
	porcentaje_tiros_triples_Equipo1 <- (tiros_triples_Equipo1*3*100)/total_tiros_Equipo1
	Escribir 'Hay un:',porcentaje_tiros_simples_Equipo1,'% de tiros simples de Equipo 1'
	Escribir 'Hay un:',porcentaje_tiros_dobles_Equipo1,'% de tiros dobles de Equipo 1'
	Escribir 'Hay un:',porcentaje_tiros_triples_Equipo1,'% de tiros triples de Equipo 1'
	Escribir 'Equipo 2:'
	Escribir 'Ingrese la cantidad de tiros simples:'
	Leer tiros_simples_Equipo2
	Escribir 'Ingrese la cantidad de tiros dobles:'
	Leer tiros_dobles_Equipo2
	Escribir 'Ingrese la cantidad de tiros triples:'
	Leer tiros_triples_Equipo2
	total_Tiros_Equipo2 <- tiros_simples_Equipo2+tiros_dobles_Equipo2*2+tiros_triples_Equipo2*3
	porcentaje_tiros_simples_Equipo2 <- (tiros_simples_Equipo2*100)/(total_Tiros_Equipo2)
	porcentaje_tiros_dobles_Equipo2 <- (tiros_dobles_Equipo2*2*100)/(total_Tiros_Equipo2)
	porcentaje_tiros_triples_Equipo2 <- (tiros_triples_Equipo2*3*100)/(total_Tiros_Equipo2)
	Escribir 'Hay un:',porcentaje_tiros_simples_Equipo2,'% de tiros simples de Equipo 2'
	Escribir 'Hay un:',porcentaje_tiros_dobles_Equipo2,'% de tiros dobles de Equipo 2'
	Escribir 'Hay un:',porcentaje_tiros_triples_Equipo2,'% de tiros triples de Equipo 2'
FinAlgoritmo
