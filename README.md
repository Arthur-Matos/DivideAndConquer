# D&C - Resolução de Problemas

**Número da Lista**: 13<br>
**Conteúdo da Disciplina**: D&C <br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 19/0010495  |  Arthur Alves de Matos |
| 17/0085023  |  Carla Rocha Cangussú |

## Sobre
O objetivo do projeto é responder questões disponíveis em juízes online sobre algoritmos dividir e conquistar, as questões serão de média e alta complexidade.

## Screenshots
### Resultados dos Problemas em terminal
A partir dos arquivos de testes `teste.txt` presentes em cada diretório, os seguintes resultados são apresentados

### Bee 1310 - Lucro
![1310](/screenshots/1310.png)

### Bee 1892 - Calouro Vence Veterano?
![1892](/screenshots/1892.png)

### Bee 1088 - Bolhas e Baldes
![1892](/screenshots/1088.png)

### Bee 1295 - Problema dos Pares Mais Próximos
![1295](/screenshots/1295.png)

## Instalação 
**Linguagem**: C<br>
Linguagem: C
Para a utilização do projeto, deve-se ter acesso ao compilador de linguagem C gcc.

## Uso 
Cada questão foi separada em uma pasta diferente e para executar os códigos de cada uma das questões é necessário a execução dos 3 seguintes comandos adaptados ao nome do arquivo de cada questão. Ex:

```sh
    cd Questoes/n_questao/
    gcc -o n_questao n_questao.c
    ./n_questao < teste.txt
```

### Uso para 1295
Para a questão 1295 é necessário rodar com o comando -lm para linkar a biblioteca math.h

```sh
    cd Questoes/1295/
    gcc -o 1295 1295.c -lm
    ./1295 < teste.txt
```

## Outros
Para acessar os enunciados é necessário criar um login na plataforma Beecrowd, os links de cada enunciado estão presentes em:

- [Bee 1310 - Lucro](https://judge.beecrowd.com/pt/problems/view/1310)
- [Bee 1892 - Calouro Vence Veterano?](https://judge.beecrowd.com/pt/problems/view/1892)
- [Bee 1088 - Bolhas e Baldes](https://judge.beecrowd.com/pt/problems/view/1088)
- [Bee 1295 - Problema dos Pares Mais Próximos](https://judge.beecrowd.com/pt/problems/view/1088)

## Apresentações de resoluções
Exemplificações em vídeo de aplicações entre os exercicios resolvidos.

- [Bee 1310 - Lucro](https://drive.google.com/file/d/1jSHzbD-Ms4My1RPk8Bm_QQdwO1oCOzro/view)
- [Bee 1892 - Calouro Vence Veterano? e Bee 1088 - Bolhas e Baldes](https://unbbr.sharepoint.com/sites/Contaprivada/Documentos%20Compartilhados/General/Recordings/Reuni%C3%A3o%20em%20_General_-20240819_210726-Grava%C3%A7%C3%A3o%20de%20Reuni%C3%A3o.mp4?web=1&referrer=Teams.TEAMS-ELECTRON&referrerScenario=MeetingChicletGetLink.view)