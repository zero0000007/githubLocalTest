<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>无标题文档</title>
</head>

<body>

<p>
  <?php
include("mysql.php");


$sql = "DELETE FROM lyb WHERE id = '".$_GET['id']."' LIMIT 1 ";
$result = mysqli_query( $conn, $sql );
$home_url = 'loged.php';
header('Location:'.$home_url);
?>
  
</p>
</body>
</html>