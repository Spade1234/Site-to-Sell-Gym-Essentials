<?php

session_start();
$email=$_SESSION['email'];

$host="localhost";
$user="root";
$pssword="";
$db="fithit";
$conn=mysqli_connect("localhost","root","","fithit",3308);
{
    if(!$conn)
    {
        die("connection failed".mysqli_connect_error());
    }

}
$query="select * from batch"; 
$result=mysqli_query($conn,$query);
?>
<!DOCTYPE html>
<html>
    <head>
        <title>admintrainer</title>
        <style>
            * {
  font-family: sans-serif; /* Change your font family */
}

.content-table {
  border-collapse: collapse;
  margin: 25px 0;
  font-size: 0.9em;
  min-width: 400px;
  border-radius: 5px 5px 0 0;
  overflow: hidden;
  box-shadow: 0 0 20px rgba(0, 0, 0, 0.15);
}

.content-table thead tr {
  background-color: #009879;
  color: #ffffff;
  text-align: center;
  font-weight: bold;
  height: 50px;
}
content-table th,
.content-table td {
  padding: 12px 15px;
}

.content-table tbody tr {
  border-bottom: 1px solid #dddddd;
}

.content-table tbody tr:nth-of-type(even) {
  background-color: #f3f3f3;
}

.content-table tbody tr:last-of-type {
  border-bottom: 2px solid #009879;
}

.content-table tbody tr.active-row {
  font-weight: bold;
  color: #009879;
}

button{
  color: white;
  width: 75px;
}
button:hover{
  background:black;
}
.add{
  margin-left: 40%;
  background: green;
}
.delete{
  background: red;
}
.edit{
  background: blue;
}
</style>
</head>
<body>
<table class="content-table">
    <!-- //<theaad> -->
    <tr> 
		<thead colspan="4"><h2>Batches</h2></th> 
</tr><tr> 
			  <th> ID </th> 
			  <th> Start Time </th>
        <th> End Time </th>
        <th> Cost(Trainer)</th>
        <th> Cost</th> 
			  
        <th> </th>
        <th> </th>
		</tr> 
</thead>
<tbody>
    <?php while($rows=mysqli_fetch_assoc($result)) 
		{ 
		?> 
		<tr> <td><?php echo $rows['bid']; ?></td> 
		<td><?php echo $rows['stime']; ?></td> 
        <td><?php echo $rows['etime']; ?></td>
        <td><?php echo $rows['tcost']; ?></td>  
	    	<td><?php echo $rows['cost']; ?></td> 
       <!--<td><?php echo $rows['nou']; ?></td>-->
        <?php 
            $_SESSION['batch']=$rows['bid'];
        ?>
        <!-- <td><a href=deleteBatch.php><button class="delete">Delete</button></a></td> -->
        <td><a href="deleteBatch.php?batch=<?php echo $rows['bid'];?>"><button class="delete">Delete</button></a></td>
        <td><a href="editBatchform.php?bid=<?php echo $rows['bid'];?>"><button class="edit">Edit</button></a></td>
		</tr> 
	<?php 
    } 
  ?> 
          </tbody>
  </table>
  <br><br>
  <a href="addBatch.html"><button class="add">Add</button></a>
</body>
  </html>