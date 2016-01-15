<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>无标题文档</title>
</head>

<body>
<?php
include("mysql.php");
if( $_POST )
{
	$sql = "INSERT INTO lyb ( lyb ) 
	VALUES ( '".$_POST['lyb']."') ";
	$result = mysqli_query( $conn, $sql );
	if( $result )
	{
		echo "留言成功";
	}
	else
	{
		echo "留言失败，请与管理员联系。谢谢。";
	}
}
?>
<br>
<a href="index.php"><input type="button" value="返回留言板"></input></a>
</body>
</html>