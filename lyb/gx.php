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
$sql = "SELECT * FROM cookie ";
$result = mysqli_query( $conn, $sql );
$lyb = array();
while( $row = mysqli_fetch_array( $result ) )
{
	$lyb[] = $row;
}
$number = 0;
	foreach( $lyb as $v)
	{
		if($v['dTime'] < time()){
			$number++;
			$sql = "DELETE FROM `cookie` WHERE '".$v['id']."'";
			mysqli_query( $conn, $sql );
		}
	}
	if(!$number==0){
		$sql = "SELECT * FROM `mcookie` ";
$result = mysqli_query( $conn, $sql );
$lyb = array();
while( $row = mysqli_fetch_array( $result ) )
{
	$lyb[] = $row;
}
	foreach( $lyb as $v)
	{
		$nCookie = $v['nCookie'] - $number;
		$sql = "UPDATE `mcookie` SET `nCookie`='".$nCookie."'";
		mysqli_query( $conn, $sql );
	}
	}
$home_url = 'loged.php';
header('Location:'.$home_url);
?>
</p>

</body>
</html>