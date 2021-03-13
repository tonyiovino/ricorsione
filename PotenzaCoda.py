def potenza(a, x):
	return potenza_helper(a, x, 1)

def potenza_helper(base, exp, parziale):

	if (exp == 1):
		return parziale * base

	return potenza_helper(base, exp-1, parziale*base)

# main
a, x = input("Inserisci la potenza (es. 3^2): ").split('^')

a = int(a)
x = int(x)

power = potenza(a, x)

print(f"{a}^{x} = {power}\n")