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
$query="select * from payment where email='$email'"; 
$result=mysqli_query($conn,$query);
?>
<!DOCTYPE html>
<html>
    <head>
        <title>adminpayment</title>
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
        </style>
    </head>
<body>
<table class="content-table">
    <!-- //<theaad> -->
    <tr> 
		<thead colspan="4"><h2>Payment Details</h2></th> 
</tr><tr> 
			  <th> Payment ID </th> 
			  <th> Name</th>
              <th> Email ID</th>
              <th> Address</th>
              <th> City</th> 
			        <th> Month</th>
              <th> Batch ID</th>
              <th> Card Name</th>
              <th> Card Number </th>
              <th> Expiery Month </th>
              <th> Expiery Year </th>
              <th> CVV </th>
			  
		</tr> 
</thead>
<tbody>
    <?php while($rows=mysqli_fetch_assoc($result)) 
		{ 
		?> 
		<tr> <td><?php echo $rows['pid']; ?></td> 
		<td><?php echo $rows['name']; ?></td> 
        <td><?php echo $rows['email']; ?></td>
        <td><?php echo $rows['address']; ?></td>  
		<td><?php echo $rows['city']; ?></td> 
        <td><?php echo $rows['month']; ?></td>
        <td><?php echo $rows['bid']; ?></td>
        <td><?php echo $rows['cardname']; ?></td>
        <td><?php echo $rows['cardno']; ?></td>
        <td><?php echo $rows['expmonth']; ?></td>
        <td><?php echo $rows['expyear']; ?></td>
        <td><?php echo $rows['cvv']; ?></td>
		</tr> 
	<?php 
               } 
          ?> 
          </tbody>
  </table>
</body>
  </html>