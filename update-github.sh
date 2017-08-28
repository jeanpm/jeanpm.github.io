## Diretório onde os arquivos do jekyll estão
web="../UTFPR-web"


## Copia arquivos gerados pelo jekyll para este diretório
rsync -r $web/_site/* .


## Copia os arquivos de markdown para backup no github

zip -r A22CP-172-md.zip $web/AE22CP-172/_posts/* 

zip -r A22CP-171-md.zip $web/AE22CP-171/_posts/* 

zip -r LC21CP-171-md.zip $web/LC21CP-172/_posts/* 


git add .
git commit -m "Atualização `date`"


git push -u origin master
