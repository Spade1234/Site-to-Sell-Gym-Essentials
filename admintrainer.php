<?php
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
$query="select * from trainer"; 
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
  /* width: 600px; */
  height: 50px;
}
content-table th,
.content-table td {
  padding: 12px 15px;
  text-align: center;
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
        </style>
    </head>
<body>
<table class="content-table">
    <!-- //<theaad> -->
    <tr> 
		<thead colspan="4"><h2>Trainer</h2></th> 
</tr><tr> 
			  <th> ID </th> 
			  <th> First Name </th>
              <th> Middle Name </th>
              <th> Last Name </th>
              <th> Gender </th> 
			  <th> Email </th>
              <th> Password </th> 
			  <th> Address </th> 
              <th> Phone Number </th>
			  
		</tr> 
</thead>
<tbody>
    <?php while($rows=mysqli_fetch_assoc($result)) 
		{ 
		?> 
		<tr> <td><?php echo $rows['tid']; ?></td> 
		<td><?php echo $rows['tfname']; ?></td> 
        <td><?php echo $rows['tmname']; ?></td>
        <td><?php echo $rows['tlname']; ?></td>  
		<td><?php echo $rows['tgender']; ?></td> 
        <td><?php echo $rows['email']; ?></td>
        <td><?php echo $rows['password']; ?></td>
		<td><?php echo $rows['address']; ?></td> 
        <td><?php echo $rows['tphno']; ?></td>
		</tr> 
	<?php 
               } 
          ?> 
          </tbody>
  </table>
</body>
  </html>