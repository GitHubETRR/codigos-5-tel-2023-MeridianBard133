Algoritmo repaso_punto_4
	Escribir 'ingrese numero real'
	Leer numero_real
	Escribir 'ingrese numero imaginario'
	Leer numero_imaginario
	Escribir 'frequencia:'
	Leer F
	Omega <- 2*PI*F
	Si numero_imaginario>0 Entonces
		Inductor <- numero_imaginario*Omega
		Si Inductor=0 Entonces
			Escribir 'No tiene inductancia'
		SiNo
			Escribir Inductor,'Hernios'
		FinSi
	SiNo
		Capacitor <- 1/Omega
		Si Capacitor=0 Entonces
			Escribir 'No tiene capacitancia'
		SiNo
			Escribir Capacitor,'Faradios'
		FinSi
	FinSi
FinAlgoritmo
