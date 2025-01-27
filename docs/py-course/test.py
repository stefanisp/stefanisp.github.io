import math

# Parâmetros
P = 1000  # Valor inicial
r = 0.05  # Taxa de crescimento (5%)
t = 10    # Tempo em anos

# Fórmula do crescimento exponencial
A = P * math.exp(r * t)

print("O valor final após", t, "anos é: R$ ", A)