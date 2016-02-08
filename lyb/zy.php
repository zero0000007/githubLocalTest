<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>无标题文档</title>
</head>

<body>

<p>
  <?php
include("mysql.php");
$sql = "UPDATE `cookie` SET `zy`= 1 WHERE id = '".$_GET['id']."'";
$result = mysqli_query( $conn, $sql );
$home_url = 'loged.php';
header('Location:'.$home_url);
?>
</p>

</body>
</html>