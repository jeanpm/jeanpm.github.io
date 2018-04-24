import matplotlib.pyplot as plt
import sys
import numpy as np
import warnings
warnings.simplefilter("ignore")

FREE = 0
WALL = 1
VISITED = 2
TARGET  = 9
HEAD_TAIL = 3

if len(sys.argv) < 2:
    print("Forma de usar:")
    print("python3 " + sys.argv[0] + " <arquivo_labirinto.bin>")
    sys.exit(0)

maze = np.genfromtxt(sys.argv[1], skip_header=2)
# Número de linhas da matriz labirinto
n = maze.shape[0]
# Número de colunas da matriz labirinto
m = maze.shape[1]

# Define a tela de plot como interativa, para atualização
plt.ion()
img = plt.imshow(maze, interpolation='nearest')
# Exibe a matriz do labirinto
plt.show()

print("Dimensões do labirinto: ", maze.shape)

path = []
# Repetição que lê do arquivo de solução do labirinto os caminhos
# percorridos e mostra o percurso dinamicamente.
while True:
    x, y = input().split()
    x = int(x)
    y = int(y)

    # Termina quando -1 -1 for lido
    if x < 0:
        break

    # Atualiza a cor da posição atual
    maze[x,y] = (maze[x,y] + VISITED)

    # Armazena as posições percorridas
    path.append((x,y))

    # Atualiza no plot a matriz do labirinto
    img.set_data(maze)
    plt.draw()
    # Pequena pausa para melhor visualização
    plt.pause(0.00001)


# Código abaixo serve apenas para identificar o caminho da origem
# ao destino.
def adjacent(tupla1, tupla2):
    adjc_x = False
    adjc_y = False
    if tupla1[0] == tupla2[0] + 1 or tupla1[0] == tupla2[0] - 1 or tupla1[0] == tupla2[0]:
        adjc_x = True
    if tupla1[1] == tupla2[1] + 1 or tupla1[1] == tupla2[1] - 1 or tupla1[1] == tupla2[1]:
        adjc_y = True
    return adjc_x and adjc_y

target = path[-1]
prev = target
path = path[0:-1]
spath = []
for t in reversed(path):
    if adjacent(t, prev):
        spath.append(t)
        prev = t


# set the initial position to a different color
maze[path[0][0], path[0][1]] = TARGET
i = (0,0)
for i in spath:
    maze[i[0],i[1]] = 5
maze[i[0],i[1]] = TARGET

img.set_data(maze)
plt.draw()

print("Aperte qualquer tecla para finalizar...")

plt.waitforbuttonpress()
