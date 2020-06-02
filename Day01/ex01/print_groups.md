1. Напишите командную строку, которая будет отображать список групп к которым принадлежит чей-нибудь login id, содержащийся в переменной среде FT_USER. Разделенными запятыми и без пробелов.
   > Write a command line that will display the list of groups for which the login, contained in the environment variable FT_USER , is a member. Separated by commas without spaces.

2. Examples:
    * o	для FT_USER=nours, результат будет *god,root,admin,master,nours,bocal* (без кавычек)
      > for FT_USER=nours, the result is "god,root,admin,master,nours,bocal" (without quotation marks)
    ```
    $>./print_groups.sh
    god,root,admin,master,nours,bocal$>
    ```

    * o	для FT_USER=daemon, результат будет *daemon.bin* (без кавычек)https://losst.ru/gruppy-polzovatelej-linux
      > for FT_USER=daemon, the result is "daemon,bin" (without quotation marks)
    ```
    $>./print_groups.sh
    daemon,bin$>
    ```

* man groups
