<!doctype html>
<?php
include("mysql.php");
if($_COOKIE['name']) 
{
	$sql = "SELECT `zy` FROM `cookie` WHERE id = '".$_COOKIE['id']."'";
	$result = mysqli_query( $conn, $sql );
$row = mysqli_fetch_array( $result );
$lyb = array();
$lyb[] = $row;
foreach($lyb as $v){
	if($v['zy']==1){
		setcookie('zy',1,$_COOKIE['maxAge']);
	}}
}else{
$sql = "SELECT * FROM mcookie ";
$result = mysqli_query( $conn, $sql );
$row = mysqli_fetch_array( $result );
$lyb = array();
$lyb[] = $row;
foreach($lyb as $v){
if($v['mCookie']>$v['nCookie']){
$v['nCookie']++;
$sql = "UPDATE `mcookie` SET`nCookie`='".$v['nCookie']."'";
mysqli_query( $conn, $sql );
$dTime = time()+3600*24*30;
$sql = "INSERT INTO `cookie`(`bj`, `zy`, `dTime`) VALUES (1,0,'".$dTime."')";
 mysqli_query( $conn, $sql );
	$sql = "SELECT `id` FROM `cookie` WHERE bj = 1";
	$result = mysqli_query( $conn, $sql );
$lyb = array();
$id = mysqli_fetch_array( $result );
$lyb[] = $row;
foreach($lyb as $b){
	if( $result && $b['id'])
	{
		setcookie('id',$b['id'],$dTime);
		setcookie('zy',0,$dTime);
		setcookie('maxAge',$dTime,$dTime);
	}}
	$sql = "UPDATE `cookie` SET `bj` = 0";
mysqli_query( $conn, $sql );
}}
}
if($_COOKIE['maxAge']>time() && $_COOKIE['zy'] == 0){
$fy=1;
}
?>
<html>
<head>
<meta charset="utf-8">
</head>
<body>
<?php
$sql = "SELECT * FROM lyb ";
$result = mysqli_query( $conn, $sql );
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
		<td><?php echo $v['name']; ?></td>
		<td><?php echo $v['lyb']; ?></td>
	</tr>
		<?php
	}
	?>
</table>
<?php
if($fy == 1)
{
?>
<a href="add.html"><input type="button" value="我要留言"></input></a>
<?php
}elseif($_COOKIE['maxAge'] == 1){
	echo "您已被禁言。";
}
?>
</body>
</html>
