## Diretório onde os arquivos do jekyll estão
web="~/UTFPR-web"


## Copia arquivos gerados pelo jekyll para este diretório
rsync -r $web/_site/* .


## Copia os arquivos de markdown para backup no github
rsync -r $web/AE22CP-172/* ./AE22CP-172-md-files/
rsync -r $web/AE22CP-171/* ./AE22CP-171-md-files/
rsync -r $web/LC21CP-172/* ./LC21CP-172-md-files/


git add .
git commit -m "Atualização `date`"


git push -u origin master
