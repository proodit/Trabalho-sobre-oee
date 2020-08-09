import os, ascii, time
from tqdm import tqdm
from funcoes import imagem, loading, disponibilidade, desempenho, qualidade, oee, limpa

imagem()
loading() #Progress Bar

limpa()

'''Primeiro menu'''

print("OEE - Eficiencia Global dos Equipamentos (Overall Equipment Effectiveness)\n")
print("Digite a opcao desejada\n")
print("  1: Disponibilidade\n  2: Desempenho\n  3: Qualidade\n  4: OEE\n")

while True:
    try:
        opcao = int(input("  : "))
        limpa()
    except:
        print("Digite um numero um numero valido\n")
        quit()

    if opcao == 1:
        disponibilidade()
        quantidadeTurnos = int(input("Qual a quantidade de Turnos? "))
        limpa()

        disponibilidade()
        trocaTurnos = int(input("Qual o tempo disponivel para troca de turno em minutos? "))
        limpa()

        disponibilidade()
        paradaCorretiva = int(input("Digite o tempo da parada corretiva em horas "))
        limpa()

        '''Calculo de disponibilidade'''

        a = 1440-(trocaTurnos*quantidadeTurnos)
        b = a-(paradaCorretiva*60)
        c = b/a
        d = c*100

        '''Calculo de disponibilidade'''

        print('O resultado e {:.2f}%'.format(d))
        quit()
    elif opcao==2:
        desempenho()
        quantidadeTurnos = int(input("Qual a quantidade de Turnos? "))
        limpa()

        desempenho()
        trocaTurnos = int(input("Qual o tempo disponivel para troca de turno em minutos? "))
        limpa()

        desempenho()
        paradaCorretiva = int(input("Digite o tempo da parada corretiva em horas "))
        limpa()

        desempenho()
        quantidadeProducaoHora = int(input("Qual a produção por hora? "))
        limpa()

        desempenho()
        producaoNormail = int(input("Qual a produção em dias normais? "))
        limpa()

        '''Calculo de desempenho'''

        a = 1440-(trocaTurnos*quantidadeTurnos)
        b = a-(paradaCorretiva*60)
        e = ((quantidadeProducaoHora*b)/60)
        f = producaoNormail/e
        g = f*100

        '''Calculo de desempenho'''

        print('O resultado e {:.2f}%'.format(g))
        quit()
    elif opcao==3:
        qualidade()
        producaoNormail = int(input("Qual a produção em dias normais? "))
        limpa()

        qualidade()
        producaoDefeituosa = int(input("Produção defeituosa? "))
        limpa()

        '''Calculo de qualidade'''

        h = producaoNormail-producaoDefeituosa
        i = h/producaoNormail
        j = i*100

        '''Calculo de qualidade'''

        print('O resultado e {:.2f}%'.format(j))
        quit()
    elif opcao==4:
        print("\n OEE\n")
        print(" 1: Resultado rapido.\n 2: Resultado detalhado.\n")
    while True:
        try:
            op = int(input("  : "))
            limpa()
        except:
            print("Digite um numero um numero valido\n")
            quit()
        if op==1:
            oee()
            quantidadeTurnos = int(input("Qual a quantidade de Turnos? "))
            limpa()

            oee()
            trocaTurnos = int(input("Qual o tempo disponivel para troca de turno em minutos? "))
            limpa()

            oee()
            paradaCorretiva = int(input("Digite o tempo da parada corretiva em horas "))
            limpa()

            oee()
            quantidadeProducaoHora = int(input("Qual a produção por hora? "))
            limpa()

            oee()
            producaoNormail = int(input("Qual a produção em dias normais? "))
            limpa()

            oee()
            producaoDefeituosa = int(input("Produção defeituosa? "))
            limpa()

            oee()
            quantidadeProducao = int(input("Qual o índice de aprovação minimo da empresa?? "))
            limpa()

            '''Calculo de OEE'''

            a = 1440 - (trocaTurnos * quantidadeTurnos)
            b = a - (paradaCorretiva * 60)
            c = b / a
            d = c * 100

            e = ((quantidadeProducaoHora * b) / 60)
            f = producaoNormail / e
            g = f * 100

            h = producaoNormail - producaoDefeituosa
            i = h / producaoNormail
            j = i * 100

            l = c * f * i
            m = l * 100

            '''Calculo de OEE'''

            print('O resultado e {:.2f}%'.format(m))
            quit()

        elif op==2:
            oee()
            quantidadeTurnos = int(input("Qual a quantidade de Turnos? "))
            limpa()

            oee()
            trocaTurnos = int(input("Qual o tempo disponivel para troca de turno em minutos? "))
            limpa()

            oee()
            paradaCorretiva = int(input("Digite o tempo da parada corretiva em horas "))
            limpa()

            oee()
            quantidadeProducaoHora = int(input("Qual a produção por hora? "))
            limpa()

            oee()
            producaoNormail = int(input("Qual a produção em dias normais? "))
            limpa()

            oee()
            producaoDefeituosa = int(input("Produção defeituosa? "))
            limpa()

            oee()
            quantidadeProducao = int(input("Qual o índice de aprovação minimo da empresa?? "))

            '''Calculo de OEE'''

            a = 1440 - (trocaTurnos * quantidadeTurnos)
            b = a - (paradaCorretiva * 60)
            c = b / a
            d = c * 100
            print("| Disponibilidade: {:.2f} aproximadamente {:.2f}%.\n".format(d/100, d))

            e = ((quantidadeProducaoHora * b) / 60)
            f = producaoNormail / e
            g = f * 100
            print("| Disponibilidade: {:.2f} aproximadamente {:.2f}%.\n".format(g/100, g))

            h = producaoNormail - producaoDefeituosa
            i = h / producaoNormail
            j = i * 100

            '''Calculo de OEE'''

            print("| Disponibilidade: {:.2f} aproximadamente {:.2f}%.\n".format(j/100, j))

            l = c * f * i
            m = l * 100
            print("| Disponibilidade: {:.2f} aproximadamente {:.2f}%.\n".format(m/100, m))

            print('O resultado e {:.2f}%\n'.format(m))
            quit()
'''THE END'''