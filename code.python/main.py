def main():
  a = int(input("Insira o primeiro numero: "))
  b = int(input("Insira o segundo numero: "))
  print("Qual operacao deseja realizar? (1)Soma (2)Subtracao (3)Multiplicacao (4)Divisao: ")
  x = int(input("Escolha uma operacao: "))
  if x == 1:
      r = a + b
  elif x == 2:
      r = a - b
  elif x == 3:
      r = a * b
  elif x == 4:
      r = a * b

  print(f"Resultado: {r}")

if __name__ == "__main__":
  main()
