Algoritmo repaso_punto_1
	Escribir 'Bienvenido al programa que calcula modulo y angulo'
	Escribir 'Ingrese parte imaginaria'
	Leer img
	Escribir 'Ingrese parte real'
	Repetir
		Leer real
		Si real<>0 Entonces
			Modu <- raiz(real^2+img^2)
			Si real<0 Entonces
				Ang <- atan(img/real)*180/PI
				Ang <- Ang+180
			SiNo
				Ang <- atan(img/real)*180/PI
			FinSi
			Escribir 'El modulo dio',Modu,'y el angulo dio',Ang
		SiNo
			Escribir 'Ingrese un numero que no sea 0'
		FinSi
	Mientras Que real=0
FinAlgoritmo
