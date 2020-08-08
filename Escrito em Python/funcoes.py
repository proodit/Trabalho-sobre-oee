import time, ascii, os
from tqdm import tqdm

def imagem():
    imagem = ascii.loadFromUrl('https://www.ppi-multitask.com.br/wp-content/uploads/2016/10/OEE-inicio-2.jpg')
    print(imagem)

def limpa():
    os.system('cls')

def loading():
    for i in tqdm(range(100)):
        time.sleep(0.02)

def disponibilidade():
    print("\033[44mDisponibilidade diária\033[m\n")

def desempenho():
    print("\033[44mDesempenho diário\033[m\n")

def qualidade():
    print("\033[44mQualidade diária\033[m\n")

def oee():
    print("\033[44mOEE - Overall Equipment Effectiveness\033[m\n")
