def potenza(b, e):
	if e == 1:
		return b
	elif e == 0:
		return 1

	return b * potenza(b, e-1)

# main
e = -1
while e < 0:
	b, e = input("Inserisci la potenza (es. 3^2): ").split('^')
	b = int(b)
	e = int(e)

power = potenza(b, e)

print(f"{b}^{e} = {power}\n")