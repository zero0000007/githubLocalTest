<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>无标题文档</title>
</head>

<body>
<?php
include("mysql.php");
$sql = "SELECT * FROM lyb ";
$result = mysqli_query( $conn, $sql );
mysqli_query($conn,"SET NAMES utf8");
$lyb = array();
while( $row = mysqli_fetch_array( $result ) )
{
	$lyb[] = $row;
}
?>
<table border="1">
	<tr>
		<th>留言者</th>
		<th>留言</th>
	</tr>
	<?php
	foreach( $lyb as $v)
	{
		?>
	<tr>
		<td><?php echo $v['id']; ?></td>
		<td><?php echo $v['lyb']; ?></td>
	</tr>
		<?php
	}
	?>
</table>
<a href="add.html"><input type="button" value="我要留言"></input></a>
</body>
</html>
