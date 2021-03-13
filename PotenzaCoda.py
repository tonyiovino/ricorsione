def potenza(a, x):
	return potenza_helper(a, x, 1)

def potenza_helper(base, exp, parziale):

	if exp == 1:
		return parziale * base
	elif exp == 0:
		return 1

	return potenza_helper(base, exp-1, parziale*base)

# main
e = -1
while e < 0:
	a, x = input("Inserisci la potenza (es. 3^2): ").split('^')
	a = int(a)
	x = int(x)


power = potenza(a, x)

print(f"{a}^{x} = {power}\n")