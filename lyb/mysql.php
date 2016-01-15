<?php
$address = "localhost";
$dbuser = "root";
$dbpassword = "";
$dbtable = "lyb";

$conn = mysqli_connect($address,$dbuser,$dbpassword);
mysqli_select_db($conn,$dbtable);
mysqli_query($conn,"SET NAMES utf-8");
?>