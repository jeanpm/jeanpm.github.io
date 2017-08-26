# Limpar entradas antigas
rm input/*
rm output/*


MAXOPS=1000
for i in `seq 0 9`;
do
    ./geninout $MAXOPS 2&> input/input0$i.txt > output/output0$i.txt;
    sleep 1;
done

## Gera input e output de examplo (menores)
MAXOPS=10
for i in `seq 10 19`;
do
    ./geninout $MAXOPS 2&> input/input$i.txt > output/output$i.txt;
    sleep 1;
done

rm aps1-testes.zip

zip -r aps1-testes.zip input/ output/
