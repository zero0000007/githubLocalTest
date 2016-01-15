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
		echo "留言添加成功。";
	}
	else
	{
		echo "留言添加失败。";
	}
}
//使用会话内存储的变量值之前必须先开启会话
session_start();
//使用一个会话变量检查登录状态
if(isset($_SESSION['username'])){
    echo 'You are Logged as '.$_SESSION['username'].'<br/>';
	
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
        <th>操作</th>
	</tr>
	<?php
	foreach( $lyb as $v)
	{
		?>
	<tr>
		<td><?php echo $v['id']; ?></td>
		<td><?php echo $v['lyb']; ?></td>
        <td><a href="del.php?id=<?php echo $v['id']; ?>" onClick="return confirm('是否要删除这个留言?');">删除</a></td>
	</tr>
		<?php
	}
	?>
</table>
	<?php
    //点击“Log Out”,则转到logOut页面进行注销
    echo '<a href="logOut.php"> Log Out('.$_SESSION['username'].')</a>';
}
/**在已登录页面中，可以利用用户的session如$_SESSION['username']、
 * $_SESSION['user_id']对数据库进行查询，可以做好多好多事情*/
?>
<form name="form1" method="post" action="">
  <label for="remark">留言</label>
  <input type="text" name="lyb" id="lyb" />
  <br>
  <input type="submit" name="button" id="button" value="添加留言" />
</form>
</body>
</html>