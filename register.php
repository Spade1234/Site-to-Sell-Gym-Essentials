<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>Document</title>
</head>
<body>
	
<?php
$servername = "localhost";
$username = "root";
$password = "";
$database_name = "fithit";


$conn = mysqli_connect($servername,$username,$password,$database_name,3308);
//now check the connection

if(!$conn)
{
	die("connection failed:" . mysqli_connect_error());
}

if(isset($_POST['submit']))
{
	
    $email = $_POST['email'];
	
	$pssword_1 = $_POST['pssword_1'];
	//echo $pssword_1;
	$pssword_2 =$_POST['pssword_2'];
	//echo $pss
	
	$sql_query ="INSERT INTO `login`(`email`, `pssword_1`) VALUES ('$email','$pssword_1')";
	if($pssword_1===$pssword_2){
		if(mysqli_query($conn,$sql_query))
		{
		?>
			<script type="text/javascript">
           		alert("new details inserted successfully");
		   		window.location.href="gymlogin.php";
			</script>
		<?php
	
		}
		else
		{
			echo "Error: " . $sql_query . "" . mysqli_error($conn);
		}
		mysqli_close($conn);
	}
	else
	{
	?>
		<script type="text/javascript">
           alert("Passwords don't match");
		   window.location.href="register.html";
		</script>
		<?php
	}
}
?>

</body>
</html>




