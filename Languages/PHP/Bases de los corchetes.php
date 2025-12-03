<!-- Esta forma se usa cuandp se integra el php dentro de un html o procesos similares que reguieran de procesos con php, Version 1-->
<?php 
    echo "(1.) Impresion con llaver en el inicio y fin (< ? php o ? >)";
?>

<!-- Esta es una forma que se utiliza solo cuando se requiere hacer una impresion (impresion directa sin el "echo"), si se requieren proceso o logicas entonces se usa la version normal "<?php ?>" -->
<?= 
    "(2.) Impresion recortada solo para muestreos en pantalla sin echo ni corchetes completos (< ? php ? >, Version 1 o Version 2)";
?>

<!-- Esta forma se utiliza cuando el archivo es netamente php o cuando no habra nada despues de la logica en php, y si si lo habra, entonces se debera cerrar el codigo con "?>" Version 2 -->
<?php
    echo "(3.) Impresion sin llaves en el inicio y fin (< ? php o ? >)";
