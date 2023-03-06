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

if(isset($_POST['enroll']))
{   
	$fname=$_POST['fname'];
	$mname=$_POST['mname'];
	$lname=$_POST['lname'];
	$gender=$_POST['gradio'];
	$weight=$_POST['weight'];
	$height=$_POST['height'];
	$age=$_POST['age'];
	$dweight=$_POST['dweight'];
	$email = $_POST['email'];
	$address=$_POST['address'];
	$phno=$_POST['phno'];
	$tid=$_POST['radio'];
	$bid=$_POST['bradio'];
	



	
   
	
	
	
	$sql_query ="INSERT INTO `user`(`ufname`, `umname`, `ulname`, `ugender`, `uweight`, `uheight`, `uage`, `udweight` , `email` , `address`, `uphno`,`tid`,`bid`) VALUES ('$fname','$mname','$lname','$gender','$weight','$height','$age','$dweight','$email','$address','$phno','$tid','$bid')";
	if(mysqli_query($conn,$sql_query))
	{ ?>
		<script type="text/javascript">
               alert("New Details entered Successfully");
               window.location.href="gymhomepage.php";
             </script>
		//echo "new details entry inserted successfully !";
		<?php
	}
	else
	{
		echo "Error: " . $sql_query . "" . mysqli_error($conn);
	}
	mysqli_close($conn);
}

?>