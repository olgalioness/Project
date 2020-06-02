1. В предоставленном каталоге ex01/ создайте файл с названием testDay00.
   > Create a file called testDay00 in your submission directory
2. Найдите способ, чтобы получить результат, как тут, кроме строки “total 1”:
    > Figure out a way for the output to look like this (except for the “total 1” line):
```
%> ls -l
total 1
-r--r-xr-x 1 XX XX 40 Jun 1 23:42 testDay00
%>


3. Как только выполните предыдущие шаги, выполните следующую команду, чтобы создать файл на отправку: tar -cf testDay00.tar testDay00.
   > Once you’ve achieved the previous steps, execute the following command to create the file to be submitted: tar -cf testDay00.tar testDay00.

* ! Не переживайте о том, что у вас вместо "XX".
   > Don’t worry about what you’ve got instead of "XX".

* ! Мы допускаем тот факт, что у вас будет год на временной метке файла, вместо времени.
   > A year will be accepted instead of the time, on the timestamp of the file.

* ! "login" и "wheel" соответственно будут заменены вашим логином и группой. Временная отметка файла будет в виде года, а не времени.
