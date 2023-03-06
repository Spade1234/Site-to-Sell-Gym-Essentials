<?php
session_start();
$emailID=$_SESSION['email'];

$servername = "localhost";
$username = "root";
$password = "";
$database_name = "fithit";

//echo "Hello";

$conn = mysqli_connect($servername,$username,$password,$database_name,3308);

//echo "Now check the connection";

if(!$conn)
{
	die("connection failed:" . mysqli_connect_error());
}

//echo "Connection succesful. Intaking values";

if(isset($_POST['enroll']))
//echo "In Submit";
{
	$fname=$_POST['fname'];
	$mname=$_POST['mname'];
	$lname=$_POST['lname'];
	$gender=$_POST['gradio'];
	$weight=$_POST['weight'];
	$height=$_POST['height'];
	$age=$_POST['age'];
	$dweight=$_POST['dweight'];
	//$email = $_POST['email'];
	$address=$_POST['address'];
	$phno=$_POST['phno'];
	$tid=$_POST['radio'];
	$bid=$_POST['bradio'];
	echo "$bid";

	
	
	$sql_query ="UPDATE `user` SET `ufname`='$fname',`umname`='$mname',
	`ulname`='$lname',`ugender`='$gender',`uage`='$age',`uweight`='$weight',`uheight`='$height',
	`udweight`='$dweight',
	`address`='$address',`uphno`='$phno',`tid`='$tid',`bid`='$bid' WHERE email='$emailID'";
    

	$exists = mysqli_query($conn,$sql_query);

	if($exists)
	{
	?>
		<script type="text/javascript">
		    alert( "Details updated successfully !");
		   window.location.href="gymhomepage.php";
		</script>
	<?php
	}
	else
	{
		echo "Error: " . $sql_query . "" . mysqli_error($conn);
	}
	mysqli_close($conn);
			

}
?>


