Algoritmo repaso_punto_3
	Escribir 'Por favor ingrese un numero para la primera parte imaginaria'
	Leer Num_imag1
	Escribir 'Por favor ingrese otro numero para una segunda parte imaginaria'
	Leer Num_imag2
	Escribir 'Por favor ingrese un numero para la primera parte real'
	Repetir
		Leer Num_real1
		Escribir 'Por favor ingrese otro n�mero para una segunda parte real'
		Leer Num_real2
		Si Num_real<>0 Entonces
			Escribir 'Escriba la palabra polar si desea ver el formato polar de la ecuaci�n'
			Leer Polar
			Si Polar='polar' Entonces
				Modul <- Raiz(Num_real^2+Num_imagJ^2)
				Si Num_real<0 Entonces
					�ngulo <- ATAN(Num_imagJ/Num_real)*(180/Pi)
					�ngulo <- �ngulo+180
				SiNo
					�ngulo <- ATAN(Num_imagJ/Num_real)*(180/Pi)
				FinSi
				Escribir 'El m�dulo de la ecuaci�n es ',Modul,' y el �ngulo de este es ',�ngulo
			SiNo
				Escribir 'Por lo tanto, la forma rectangular de la ecuaci�n es',(Num_real1+Num_real2),(Num_imag1+Num_imag2),'J'
			FinSi
		SiNo
			Escribir 'Ingrese un n�mero distinto de 0'
		FinSi
	Mientras Que Num_real=0
FinAlgoritmo
