Algoritmo repaso_punto_5
	Escribir 'Modulo de la tension'
	Leer ModV
	Escribir 'Modulo de la corriente'
	Leer ModI
	Escribir 'Ángulo de la tensión'
	Leer AngV
	Escribir 'Ángulo de la corriente'
	Leer AngI
	RT <- ModV*cos(AngV)
	Num_ImagV <- ModV*sen(AngV)
	Num_ImagI <- ModI*sen(AngI)
	Num_realV <- ModV*cos(AngV)
	Num_realI <- ModI*cos(AngI)
	real <- Num_ImagV-Num_ImagI
	imag <- Num_realV-Num_realI
	Escribir 'La parte imaginaria obtenida es:',imag
	Escribir 'La parte real obtenida es:',real
	Escribir 'Frequencia:'
	Leer F
	Omega <- 2*PI*F
	Si J<=0 Entonces
		CR <- 1/Omega
		Si C=0 Entonces
			Escribir 'No tiene reactancia capacitiva'
		SiNo
			Escribir 'Reactancia capacitiva:',CR
		FinSi
	SiNo
		LR <- imag*Omega
		Si LR=0 Entonces
			Escribir 'No tiene reactancia inductiva'
		SiNo
			Escribir 'Reactancia inductiva:',LR
		FinSi
	FinSi
FinAlgoritmo
